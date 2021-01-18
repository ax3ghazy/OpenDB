source "helpers.tcl"

set db [odb::dbDatabase_create]
set lib [odb::read_lef $db "data/gscl45nm.lef"]
set tech [$db getTech]
odb::read_def $db "data/design.def"
set chip [$db getChip]

set vias [$tech getVias]
set via1 [lindex $vias 0]
set layer1 [$via1 getBottomLayer]
set via2 [lindex $vias 1]
set via3 [lindex $vias 2]

set block [$chip getBlock]
set net [odb::dbNet_create $block "w1"]
set wire [odb::dbWire_create $net]
set wire_encoder [odb::dbWireEncoder]

# Encoding
$wire_encoder begin $wire
# void newPath( dbTechLayer * layer, dbWireType type )
$wire_encoder newPath $layer1 "ROUTED" 
# int addPoint( int x, int y, uint property = 0 );
$wire_encoder addPoint 2000 2000
set jid1 [$wire_encoder addPoint 10000 2000]
$wire_encoder addPoint 18000 2000
$wire_encoder newPath $jid1
# int addTechVia( dbTechVia * via );
$wire_encoder addTechVia $via1
set jid2 [$wire_encoder addPoint 10000 10000]
$wire_encoder addPoint 10000 18000
$wire_encoder newPath $jid2
set jid3 [$wire_encoder addTechVia $via2]
$wire_encoder end

set result [odb::write_def $block "results/wire_encoder.def"]

if {$result != 1} {
    puts "FAIL: error writing def"
    exit 1
}

puts "pass"
exit 0
