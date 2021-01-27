#include "lefLayerPropParser.h"
#include <boost/config/warning_disable.hpp>
#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/phoenix_core.hpp>
#include <boost/spirit/include/phoenix_operator.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/bind.hpp>
#include <boost/optional/optional_io.hpp>
#include <boost/spirit/include/qi_alternative.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/include/io.hpp>
#include <boost/fusion/algorithm.hpp>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/fusion/sequence/intrinsic/at_c.hpp>
#include <boost/fusion/include/at_c.hpp>
#include <iostream>
#include <string>

#include "lefin.h"
#include "db.h"



namespace lefTechLayerRightWayOnGridOnly {
    namespace qi = boost::spirit::qi;
    namespace ascii = boost::spirit::ascii;
    namespace phoenix = boost::phoenix;
   
    using boost::spirit::qi::lit;
    using boost::spirit::ascii::string;
    using boost::spirit::ascii::space_type;
    using boost::fusion::at_c;
    
    using qi::double_;
    using qi::int_;
    // using qi::_1;
    using ascii::space;
    using phoenix::ref;
    
    template <typename Iterator>
    bool parse(Iterator first, Iterator last, odb::dbTechLayerRightWayOnGridOnlyRule* rule, odb::lefin* lefin)
    {   
        qi::rule<std::string::iterator, space_type> rightWayOnGridOnlyRule = (
            lit("RIGHTWAYONGRIDONLY")
            >> -lit("CHECKMASK")[boost::bind(&odb::dbTechLayerRightWayOnGridOnlyRule::setCheckMask,rule,true)]
            >> lit(";") 
        );

        bool r = qi::phrase_parse(first, last, rightWayOnGridOnlyRule, space);
        

        if (first != last) // fail if we did not get a full match
            return false;
        return r;
    }
}


namespace odb{


dbTechLayerRightWayOnGridOnlyRule* lefTechLayerRightWayOnGridOnlyParser::parse(std::string s, dbTechLayer* layer, odb::lefin* l)
{
    dbTechLayerRightWayOnGridOnlyRule* rule = dbTechLayerRightWayOnGridOnlyRule::create(layer);
    if(lefTechLayerRightWayOnGridOnly::parse(s.begin(), s.end(), rule, l) )
        return rule;
    else 
    {
        odb::dbTechLayerRightWayOnGridOnlyRule::destroy(rule);
        return NULL;
    }
} 


}

