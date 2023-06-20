#!/bin/bash

chmod u+x *
git config --global credential.helper store
git add .
git commit -m "Script commit from gh.sh"
git push
