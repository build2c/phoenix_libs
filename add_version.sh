#!/usr/bin/env bash

VER="${1}"

BASEDIR="versions/${VER}"

rm -rf /tmp/phoenix_libs
mkdir -p /tmp/phoenix_libs

function download_item() {
    local ITEM="${1}"
    local VARIANT="${2}"
    local LOCATION="/tmp/phoenix_libs/${ITEM}-${VER}-${VARIANT}.zip"
    curl -sS -o "${LOCATION}"  \
        -L "http://devsite.ctr-electronics.com/maven/release/com/ctre/phoenix/${ITEM}/${VER}/${ITEM}-${VER}-${VARIANT}.zip"
}

function extract_headers() {
    local ITEM="${1}"
    local VARIANT=headers
    local LOCATION="/tmp/phoenix_libs/${ITEM}-${VER}-${VARIANT}.zip"
    local DESTINATION="versions/${VER}/headers/"
    mkdir -p "${DESTINATION}"
    unzip -n "${LOCATION}" -d "${DESTINATION}"
}

function extract_lib() {
    local ITEM="${1}"
    local VARIANT="${2}"
    local EXTRACTED="/tmp/phoenix_libs/${ITEM}-${VER}-${VARIANT}"
    local LOCATION="${EXTRACTED}.zip"
    local DESTINATION="versions/${VER}/${VARIANT}/"
    unzip -n "${LOCATION}" -d "${EXTRACTED}"
    mkdir -p "${DESTINATION}"
    for lib in $(find "${EXTRACTED}" -type f);
    do
        cp "${lib}" "${DESTINATION}"
    done
}


# Get headers
ITEMS=("api-cpp" "core" "cci")
for item in "${ITEMS[@]}"
do
    download_item ${item} headers
    extract_headers ${item}
done


# Get libraries
ITEMS=("api-cpp" "core" "cci" "canutils" "platform-socketcan")
VARIANTS=("linuxjetsontxstatic")
for item in "${ITEMS[@]}"
do
    for variant in "${VARIANTS[@]}"
    do
        download_item ${item} ${variant}
        extract_lib ${item} ${variant}
    done
done

rm -rf /tmp/phoenix_libs

