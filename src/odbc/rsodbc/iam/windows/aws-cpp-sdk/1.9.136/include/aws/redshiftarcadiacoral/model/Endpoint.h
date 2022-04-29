﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftarcadiacoral/RedshiftArcadiaCoralService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshiftarcadiacoral/model/VpcEndpoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RedshiftArcadiaCoralService
{
namespace Model
{

  class AWS_REDSHIFTARCADIACORALSERVICE_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAddress() const{ return m_address; }

    
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    
    inline int GetPort() const{ return m_port; }

    
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}


    
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const{ return m_vpcEndpoints; }

    
    inline bool VpcEndpointsHasBeenSet() const { return m_vpcEndpointsHasBeenSet; }

    
    inline void SetVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = value; }

    
    inline void SetVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = std::move(value); }

    
    inline Endpoint& WithVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { SetVpcEndpoints(value); return *this;}

    
    inline Endpoint& WithVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { SetVpcEndpoints(std::move(value)); return *this;}

    
    inline Endpoint& AddVpcEndpoints(const VpcEndpoint& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.push_back(value); return *this; }

    
    inline Endpoint& AddVpcEndpoints(VpcEndpoint&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;
    bool m_vpcEndpointsHasBeenSet;
  };

} // namespace Model
} // namespace RedshiftArcadiaCoralService
} // namespace Aws
