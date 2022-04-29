#include "IAMConfiguration.h"

using namespace Redshift::IamSupport;
using namespace Aws::Auth;

////////////////////////////////////////////////////////////////////////////////////////////////////
IAMConfiguration::IAMConfiguration(const IAMCredentials& in_credentials) :
    m_credentials(in_credentials)
{
    /* Do nothing */
}

////////////////////////////////////////////////////////////////////////////////////////////////////
AWSCredentials IAMConfiguration::GetAWSCredentials() const
{
    return m_credentials.GetAWSCredentials();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetAWSCredentials(const AWSCredentials& in_credentials)
{
    m_credentials.SetAWSCredentials(in_credentials);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetAccessId() const
{
    return m_credentials.GetAccessId();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetAccessId(const rs_string& in_accessId)
{
    m_credentials.SetAccessId(in_accessId);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetSecretKey() const
{
    return m_credentials.GetSecretKey();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetSecretKey(const rs_string& in_secretKey)
{
    m_credentials.SetSecretKey(in_secretKey);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetSessionToken() const
{
    return m_credentials.GetSessionToken();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetSessionToken(const rs_string& in_sessionToken)
{
    m_credentials.SetSessionToken(in_sessionToken);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetDbUser() const
{
    return m_credentials.GetDbUser();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetDbUser(const rs_string& in_dbUser)
{
    m_credentials.SetDbUser(in_dbUser);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetRoleARN() const
{
    return GetSetting(IAM_KEY_ROLE_ARN);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetRoleARN(const rs_string& in_role_arn)
{
    SetSetting(IAM_KEY_ROLE_ARN, in_role_arn);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetWebIdentityToken() const
{
    return GetSetting(IAM_KEY_WEB_IDENTITY_TOKEN);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetWebIdentityToken(const rs_string& in_web_identity_token)
{
    SetSetting(IAM_KEY_WEB_IDENTITY_TOKEN,
                in_web_identity_token);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
short IAMConfiguration::GetDuration() const
{
    try
    {
        return to_short(GetSetting(IAM_KEY_DURATION));
    }
    catch (...)
    {
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetDuration(short in_duration)
{
    SetSetting(IAM_KEY_DURATION, to_rs_string(in_duration));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetRoleSessionName() const
{
    return GetSetting(IAM_KEY_ROLE_SESSION_NAME);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetRoleSessionName(const rs_string& in_role_session_name)
{
    SetSetting(IAM_KEY_ROLE_SESSION_NAME,
                in_role_session_name);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetDbGroups() const
{
    return m_credentials.GetDbGroups();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetDbGroups(const rs_string& in_dbGroups)
{
    m_credentials.SetDbGroups(in_dbGroups);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
bool IAMConfiguration::GetForceLowercase() const
{
    return m_credentials.GetForceLowercase();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetForceLowercase(bool in_forceLowercase)
{
    m_credentials.SetForceLowercase(in_forceLowercase);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
bool IAMConfiguration::GetAutoCreate() const
{
    return m_credentials.GetAutoCreate();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetAutoCreate(bool in_autoCreate)
{
    m_credentials.SetAutoCreate(in_autoCreate);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetProfileName() const
{
    return GetSetting(IAM_KEY_PROFILE_NAME);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetProfileName(const rs_string& in_profileName)
{
    SetSetting(IAM_KEY_PROFILE_NAME, in_profileName);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetPluginName() const
{
    rs_string pluginName = GetSetting(IAM_KEY_PLUGIN_NAME);
    return pluginName.empty() ? IAM_PLUGIN_ADFS : pluginName;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetPluginName(rs_string in_pluginName)
{
    SetSetting(IAM_KEY_PLUGIN_NAME, in_pluginName);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetUser() const
{
    return GetSetting(IAM_KEY_USER);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetUser(const rs_string& in_user)
{
    SetSetting(IAM_KEY_USER, in_user);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetRegion() const
{
    return GetSetting(IAM_KEY_REGION);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetRegion(const rs_string& in_region)
{
    SetSetting(IAM_KEY_REGION, in_region);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetPassword() const
{
    return GetSetting(IAM_KEY_PASSWORD);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetPassword(const rs_string& in_password)
{
    SetSetting(IAM_KEY_PASSWORD, in_password);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetIdpHost() const
{
    return GetSetting(IAM_KEY_IDP_HOST);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetIdpHost(const rs_string& in_idpHost)
{
    SetSetting(IAM_KEY_IDP_HOST, in_idpHost);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
short IAMConfiguration::GetIdpPort() const
{   
    try
    {
        return to_short(GetSetting(IAM_KEY_IDP_PORT));
    }
    catch (...)
    {
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetIdpPort(short in_idpPort)
{
    SetSetting(IAM_KEY_IDP_PORT, to_rs_string(in_idpPort));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetIdpTenant() const
{
    return GetSetting(IAM_KEY_IDP_TENANT);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetIdpTenant(const rs_string& in_idpTenant)
{
    SetSetting(IAM_KEY_IDP_TENANT, in_idpTenant);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetClientSecret() const
{
    return GetSetting(IAM_KEY_CLIENT_SECRET);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetClientSecret(const rs_string& in_clientSecret)
{
    SetSetting(IAM_KEY_CLIENT_SECRET, in_clientSecret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetClientId() const
{
    return GetSetting(IAM_KEY_CLIENT_ID);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetClientId(const rs_string& in_clientId)
{
    SetSetting(IAM_KEY_CLIENT_ID, in_clientId);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
short IAMConfiguration::GetIdpResponseTimeout() const
{
    try
    {
        return to_short(GetSetting(IAM_KEY_IDP_RESPONSE_TIMEOUT));
    }
    catch (...)
    {
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetIdpResponseTimeout(short in_idp_response_timeout)
{
    SetSetting(IAM_KEY_IDP_RESPONSE_TIMEOUT, to_rs_string(in_idp_response_timeout));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
short IAMConfiguration::GetListenPort() const
{
    try
    {
        return to_short(GetSetting(IAM_KEY_LISTEN_PORT));
    }
    catch (...)
    {
        return 0;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetListenPort(short in_listen_port)
{
    SetSetting(IAM_KEY_LISTEN_PORT, to_rs_string(in_listen_port));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetLoginURL() const
{
    return GetSetting(IAM_KEY_LOGIN_URL);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetLoginURL(const rs_string& in_login_url)
{
    SetSetting(IAM_KEY_LOGIN_URL, in_login_url);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetDbGroupsFilter() const
{
    return GetSetting(IAM_KEY_DBGROUPS_FILTER);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetDbGroupsFilter(const rs_string& in_groups_filter)
{
    SetSetting(IAM_KEY_DBGROUPS_FILTER, in_groups_filter);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetPreferredRole() const
{
    return GetSetting(IAM_KEY_PREFERRED_ROLE);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetPreferredRole(const rs_string& in_preferredRole)
{
    SetSetting(IAM_KEY_PREFERRED_ROLE, in_preferredRole);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetAppId() const
{
    return GetSetting(IAM_KEY_APP_ID);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetAppId(const rs_string& in_appId)
{
    SetSetting(IAM_KEY_APP_ID, in_appId);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetAppName() const
{
    return GetSetting(IAM_KEY_APP_NAME);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetAppName(const rs_string & in_appName)
{
    SetSetting(IAM_KEY_APP_NAME, in_appName);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetPartnerSpId() const
{
    return GetSetting(IAM_KEY_PARTNER_SPID);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetPartnerSpId(const rs_string & in_partnerSpId)
{
    SetSetting(IAM_KEY_PARTNER_SPID, in_partnerSpId);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetLoginToRp() const
{
    return GetSetting(IAM_KEY_LOGINTORP);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetLoginToRp(const rs_string & in_loginToRp)
{
    SetSetting(IAM_KEY_LOGINTORP, in_loginToRp);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
bool IAMConfiguration::GetSslInsecure() const
{
    return to_bool(GetSetting(IAM_KEY_SSL_INSECURE));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetSslInsecure(bool in_sslInsecure)
{
    SetSetting(IAM_KEY_SSL_INSECURE, to_rs_string(in_sslInsecure));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetCaFile() const
{
    return GetSetting(IAM_CA_FILE);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetCaFile(const rs_string& in_caFile)
{
    SetSetting(IAM_CA_FILE, in_caFile);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetHTTPSProxyHost() const
{
    return GetSetting(IAM_KEY_HTTPS_PROXY_HOST);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetHTTPSProxyHost(const rs_string& in_proxyHost)
{
    SetSetting(IAM_KEY_HTTPS_PROXY_HOST, in_proxyHost);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
short IAMConfiguration::GetHTTPSProxyPort() const
{
    try
    {
        return to_short(GetSetting(IAM_KEY_HTTPS_PROXY_PORT));
    }
    catch (...)
    {
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetHTTPSProxyPort(const short in_proxyPort)
{
    SetSetting(IAM_KEY_HTTPS_PROXY_PORT, to_rs_string(in_proxyPort));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetHTTPSProxyUser() const
{
    return GetSetting(IAM_KEY_HTTPS_PROXY_UID);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetHTTPSProxyUser(const rs_string& in_proxyUser)
{
    SetSetting(IAM_KEY_HTTPS_PROXY_UID, in_proxyUser);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetHTTPSProxyPassword() const
{
    return GetSetting(IAM_KEY_HTTPS_PROXY_PWD);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetHTTPSProxyPassword(const rs_string& in_proxyPassword)
{
    SetSetting(IAM_KEY_HTTPS_PROXY_PWD, in_proxyPassword);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
bool IAMConfiguration::GetUseProxyIdpAuth() const
{
    return to_bool(GetSetting(IAM_KEY_IDP_USE_HTTPS_PROXY));
}


////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetUseProxyIdpAuth(bool in_useProxy)
{
    SetSetting(IAM_KEY_IDP_USE_HTTPS_PROXY, to_rs_string(in_useProxy));
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetEndpointUrl() const
{
	return GetSetting(IAM_KEY_ENDPOINT_URL);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetEndpointUrl(const rs_string& in_endpointUrl)
{
	SetSetting(IAM_KEY_ENDPOINT_URL, in_endpointUrl);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetStsEndpointUrl() const
{
	return GetSetting(IAM_KEY_STS_ENDPOINT_URL);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetStsEndpointUrl(const rs_string& in_stsEndpointUrl)
{
	SetSetting(IAM_KEY_STS_ENDPOINT_URL, in_stsEndpointUrl);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetAuthProfile() const
{
	return GetSetting(IAM_KEY_AUTH_PROFILE);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetAuthProfile(const rs_string& in_authProfile)
{
	SetSetting(IAM_KEY_AUTH_PROFILE, in_authProfile);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
bool IAMConfiguration::GetUsingHTTPSProxy() const
{
    return m_usingProxy;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetUsingHTTPSProxy(bool in_useProxy)
{
    m_usingProxy = in_useProxy;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string IAMConfiguration::GetSetting(const rs_string& in_key) const
{
    if (!m_settings.count(in_key))
    {
        return rs_string();
    }

    return m_settings.at(in_key);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::SetSetting(const rs_string& in_key, const rs_string& in_value)
{
    m_settings[in_key] = in_value;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void IAMConfiguration::RemoveSetting(const rs_string& in_key)
{
    m_settings.erase(in_key);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
IAMConfiguration::~IAMConfiguration()
{
    /* Do nothing */
}

