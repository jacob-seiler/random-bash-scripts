#!/bin/bash
cat $1 | noFirstLine.sh | noFirstLine.sh | noLastLine.sh | noLastLine.sh > $2