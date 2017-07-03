/*
 *---------------------------------------------------------------------------
 *
 *     Copyright 2007 Intel Corporation All Rights Reserved.
 *     The source code contained or described herein and all documents 
 *     related to the source code ("Material") are owned by Intel 
 *     Corporation or its suppliers or licensors. Title to the Material
 *     remains with Intel Corporation or its suppliers and licensors. 
 *     The Material may contain trade secrets and proprietary and 
 *     confidential information of Intel Corporation and its suppliers
 *     and licensors, and is protected by worldwide copyright and trade
 *     secret laws and treaty provisions. No part of the Material may 
 *     be used, copied, reproduced, modified, published, uploaded, 
 *     posted, transmitted, distributed, or disclosed in any way without
 *     Intel's prior express written permission. 
 *
 *     No license under any patent, copyright, trade secret or other 
 *     intellectual property right is granted to or conferred upon you 
 *     by disclosure or delivery of the Materials, either expressly, by
 *     implication, inducement, estoppel or otherwise. Any license under
 *     such intellectual property rights must be express and approved by 
 *     Intel in writing.
 *
 *---------------------------------------------------------------------------
*/

#ifndef __COM_INTEL_XML_PARSE_DOM_DOMIMPLEMENTATIONFACTORY_H__
#define __COM_INTEL_XML_PARSE_DOM_DOMIMPLEMENTATIONFACTORY_H__

#include "include/common/defines.h"

INTEL_XML_PARSE_DOM_NAMESPACE_BEGIN

class DOMImplementation;

/** @file domimplementationfactory.h @brief The DOMImplementationFactory interface. */

/**
 * Provides a number of methods
 * for performing operations that are independent of any particular instance
 * of the document object model.
 */
class DOM_EXPORT DOMImplementationFactory
{
public:    
    /**
     * Destructor.
     *
     */
    virtual ~DOMImplementationFactory() {}

public:
    /**
     * Gets a DOMImplementation object.
     * @descr @n The object DOMImplementationFactory will hold DOMImplementation,
     * so you do not need to release it.
     * 
     * @return The created DOMImplementation object.
     */
    virtual DOMImplementation* getDOMImplementation() = 0;

public:

    /**
     * Creates the DOMImplementationFactory object.
     *
     * @return The DOMImplementationFactory object.
     */
    static DOMImplementationFactory* newInstance();

    /**
     *  Releases the DOMImplementationFactory object.
     *
     *    @param factory - the DOMImplementationFactory object to be released.
     */
    static void releaseInstance(DOMImplementationFactory* factory);
};

INTEL_XML_PARSE_DOM_NAMESPACE_END

#endif

