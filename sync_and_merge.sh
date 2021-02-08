#!/bin/sh

git remote add source https://github.com/The-OpenROAD-Project/OpenROAD

git fetch source

git filter-branch --prune-empty --subdirectory-filter src/OpenDB/ source/master

git merge source/master && echo "Merged upstream history with the current history."

git remote remove source && echo "Removed source repository."

git for-each-ref --format="%(refname)" refs/original/ | xargs -n 1 git update-ref -d
