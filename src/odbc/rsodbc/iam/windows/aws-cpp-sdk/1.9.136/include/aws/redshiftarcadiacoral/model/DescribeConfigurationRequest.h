﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftarcadiacoral/RedshiftArcadiaCoralService_EXPORTS.h>
#include <aws/redshiftarcadiacoral/RedshiftArcadiaCoralServiceRequest.h>

namespace Aws
{
namespace RedshiftArcadiaCoralService
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFTARCADIACORALSERVICE_API DescribeConfigurationRequest : public RedshiftArcadiaCoralServiceRequest
  {
  public:
    DescribeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace RedshiftArcadiaCoralService
} // namespace Aws
