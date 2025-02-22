/***************************************************************************//**
 * @file
 * @brief Routines for bootloading an SOC.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include "app/framework/include/af.h"
#include "../../platform/service/legacy_hal/inc/bootloader-interface-app.h"
//------------------------------------------------------------------------------
// Globals

//------------------------------------------------------------------------------

uint8_t emberAfOtaBootloadCallback(const EmberAfOtaImageId* id,
                                   uint16_t ncpUpgradeTagId)
{
  halAppBootloaderInstallNewImage();

  emberAfCorePrintln("Bootloading failed!");

  // If we got here, it is a failure.
  return 1;
}
