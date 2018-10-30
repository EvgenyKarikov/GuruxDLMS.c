//
// --------------------------------------------------------------------------
//  Gurux Ltd
//
//
//
// Filename:        $HeadURL$
//
// Version:         $Revision$,
//                  $Date$
//                  $Author$
//
// Copyright (c) Gurux Ltd
//
//---------------------------------------------------------------------------
//
//  DESCRIPTION
//
// This file is a part of Gurux Device Framework.
//
// Gurux Device Framework is Open Source software; you can redistribute it
// and/or modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; version 2 of the License.
// Gurux Device Framework is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// This code is licensed under the GNU General Public License v2.
// Full text may be retrieved at http://www.gnu.org/licenses/gpl-2.0.txt
//---------------------------------------------------------------------------

#ifndef APDU_H
#define APDU_H

#include "dlmssettings.h"
#include "bytebuffer.h"

#ifdef  __cplusplus
extern "C" {
#endif
    /**
     * Generates Aarq.
     */
    int apdu_generateAarq(
        dlmsSettings* settings,
        gxByteBuffer* data);

    /**
     * Parse APDU.
     */
    int apdu_parsePDU(
        dlmsSettings* settings,
        gxByteBuffer* buff,
        DLMS_ASSOCIATION_RESULT* result,
        DLMS_SOURCE_DIAGNOSTIC* diagnostic);

    /**
     * Server generates AARE message.
     */
    int apdu_generateAARE(
        dlmsSettings* settings,
        gxByteBuffer* data,
        DLMS_ASSOCIATION_RESULT result,
        DLMS_SOURCE_DIAGNOSTIC diagnostic,
        gxByteBuffer* errorData,
        gxByteBuffer* encryptedData);

    /**
    * Generate user information.
    *
    * @param settings
    *            DLMS settings->
    * @param cipher
    * @param data
    *            Generated user information.
    */
    int apdu_generateUserInformation(
        dlmsSettings* settings,
        gxByteBuffer* data);
#ifdef  __cplusplus
}
#endif

#endif //APDU_H
