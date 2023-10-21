#!/bin/bash
marco()
{
    echo "$(pwd)" > $HOME/marco.history.log
    echo "save pwd $(pwd)"
}
polo()
{
    cd "$(cat "$HOME/marco_history.log")"
}