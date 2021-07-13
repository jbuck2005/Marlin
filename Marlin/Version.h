/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * Marlin release version identifier
 */
#define SHORT_BUILD_VERSION "bugfix-2.0.x james" // 20210105 ------------------------------------------------------------------------------------------------------------------

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
//#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#define STRING_DISTRIBUTION_DATE "2021-01-12"
=======
//#define STRING_DISTRIBUTION_DATE "2021-07-08"
>>>>>>> 9642a3689544716610ed78ace36548505460d82f
=======
//#define STRING_DISTRIBUTION_DATE "2021-07-09"
>>>>>>> 2fa24a637d8b6c2ebba92d6e9a3f0eeecf581402
=======
//#define STRING_DISTRIBUTION_DATE "2021-07-10"
>>>>>>> bd60d779041b05d844102237109c3fd98d56f891
=======
//#define STRING_DISTRIBUTION_DATE "2021-07-11"
>>>>>>> 95f96fec13eecafede6751a8b97828859005e95a
=======
//#define STRING_DISTRIBUTION_DATE "2021-07-12"
>>>>>>> 37cf94b888d5866cab914166ef246f14969a2cb4
=======
//#define STRING_DISTRIBUTION_DATE "2021-07-13"
>>>>>>> 4479b0222bb66dd54f2c60f50a35a9d35f3230dc

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */
//#define MACHINE_NAME "Replicator v0.3b" // 20201221 this value is ignored ---------------------------------------------------------------------------------------------------

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "https://github.com/jbuck2005/Marlin_Custom/tree/james" // 20210107 added GIT URL for my repo ---------------------------------------------------------

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "https://ve3bux.com" // 20201221 ---------------------------------------------------------------------------------------------------------------------------
#define CUSTOM_WEBSITE_URL "https://ve3bux.com" // 20201221 added custom to see if it matters ----------------------------------------------------------------------------------

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
