#!/usr/bin/env sh
# Exit on error or unset variables, enable trace
set -eux

# Make absolute path to vcpkg directory
ROOT=$(cd -- "$(dirname "$0")/../" && pwd -P)
VCPKG_ROOTDIR="${ROOT}/externals/vcpkg"
BUILD_ROOTDIR="${ROOT}/build"

# Ensure vcpkg repository is available (on developer machines)
if [[ ! -d "$VCPKG_ROOTDIR/.git" ]]; then
    git clone https://github.com/Microsoft/vcpkg.git  "${VCPKG_ROOTDIR}"
fi

# Build vcpkg
${VCPKG_ROOTDIR}/bootstrap-vcpkg.sh -disableMetrics

# Install required package(s)
${VCPKG_ROOTDIR}/vcpkg install gtest
