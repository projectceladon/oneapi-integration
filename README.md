# Overview
 
The Project aims to generate android shared libraries for IntelOneAPI IPP and MKL libraries using linux static libraries that are distributed by IntelOneAPI via apt.
 
Using IPP Linux static libraries ( libippdc.a, libippi.a, libippcc.a, libipps.a, libippvm.a, libippcore.a), we  build a shared library named “libippcustom”.  libippcustom is used for enabling IPP optimizations for zlib, lz4 and bzip2 modules.
 
Using oneMKL Linux static libraries to replace original cblas functions with MKL cblas functions for x86 architecture. Statically linking oneMKL libraries (libmkl_core.a, libmkl_intel_lp64.a, libmkl_sequential.a ) with “libblas” shared library.
 
# Build environment
 
For this project it’s expected that build environment should have required ipp and mkl packages installed.
 
> **The exact version of IPP and MKL packages may vary per release. Please check Celadon development environmet setup instructions for the latest information.**
 
Kindly follow the below steps to install all the required packages.
 
### Setup
1. Download the key to system keyring 
```
$ wget -O- https://apt.repos.intel.com/intel-gpg-keys/GPG-PUB-KEY-INTEL-SW-PRODUCTS.PUB \ 
| gpg --dearmor | sudo tee /usr/share/keyrings/oneapi-archive-keyring.gpg > /dev/null 
```
 
2. Add signed entry to apt sources and configure the APT client to use Intel repository 
```
$ echo "deb [signed-by=/usr/share/keyrings/oneapi-archive-keyring.gpg] https://apt.repos.intel.com/oneapi all main" | sudo tee /etc/apt/sources.list.d/oneAPI.list 
```
3. Update 
```
$ sudo apt-get update 
```
 
4. Install packages 
```
$ sudo apt-get install intel-oneapi-ipp-devel-2021.10 intel-oneapi-mkl-devel-2021.1.1 intel-oneapi-ipp-devel-32bit-2021.10 intel-oneapi-mkl-devel-32bit-2021.1.1 
```
-----
 
# About IPP and MKL
 
**Integrated Performance Primitives (IPP)** : Intel Integrated Performance Primitives (IPP) is a library of highly optimized software functions for multimedia processing, data processing, and communications applications.
Refer [IPP](https://www.intel.com/content/www/us/en/developer/tools/oneapi/ipp.html) for more details.
 
**Intel oneAPI Math Kernel Library (oneMKL)** : Intel oneAPI Math Kernel Library (oneMKL) is a highly optimized and extensively threaded math library that provides a wide range of mathematical functions for linear algebra, fast Fourier transforms (FFT), vector math, statistics, and more. It is designed to maximize performance on Intel processors.
Refer [OneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html) for more details.
