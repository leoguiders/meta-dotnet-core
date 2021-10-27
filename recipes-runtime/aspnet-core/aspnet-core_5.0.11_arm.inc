###################################################################################################
# Contains the URL and checksums to download version 5.0.11 of the ARM ASP .Net Core runtime from
# Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/a7126edf-69d6-4c87-8701-9f1e8c9cc261/27ebfe3ee12c8b123cb98d7f02335126/aspnetcore-runtime-5.0.11-linux-arm.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "b16de70385d58413dfd051f195bd9604"
SRC_URI[sha256sum] = "19e7c4ed8ba2e16a5b0e7d557ddfc95edc615c6bb73b1b8c17cfa0a95a9747ff"
