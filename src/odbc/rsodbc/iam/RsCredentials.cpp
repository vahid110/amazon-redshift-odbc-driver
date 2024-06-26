#include "RsCredentials.h"

using namespace RedshiftODBC;
using namespace Redshift::IamSupport;
using namespace Aws::Auth;

////////////////////////////////////////////////////////////////////////////////////////////////////
RsCredentials::RsCredentials(
    const rs_string& in_accessId,
    const rs_string& in_secretKey,
    const rs_string& in_sessionToken) :
    IAMCredentials(in_accessId, in_secretKey, in_sessionToken),
    m_expirationTime(0),
    m_port(0)
{
    /* Do nothing */
}

////////////////////////////////////////////////////////////////////////////////////////////////////
RsCredentials::RsCredentials(
    const rs_string& in_dbUser,
    const rs_string& in_dbPassword,
    long in_expirationTime) :
    IAMCredentials(),
    m_dbUser(in_dbUser),
    m_dbPassword(in_dbPassword),
    m_expirationTime(in_expirationTime),
    m_port(0)
{
    /* Do nothing */
}

////////////////////////////////////////////////////////////////////////////////////////////////////
RsCredentials::RsCredentials(
	const rs_string& idp_token
	) :
	IAMCredentials(),
	m_idpToken(idp_token)
{
	/* Do nothing */
	SetFixExpirationTime();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
RsCredentials::RsCredentials(
    const AWSCredentials& in_credentials) :
    IAMCredentials(in_credentials),
    m_expirationTime(0),
    m_port(0)
{
    /* Do nothing */
}

////////////////////////////////////////////////////////////////////////////////////////////////////
const RsSettings& RsCredentials::GetSettings() const
{
    return m_settings;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string RsCredentials::GetDbUser() const
{
    return m_dbUser;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetDbUser(const rs_string& in_dbUser)
{
    m_dbUser = in_dbUser;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string RsCredentials::GetDbPassword() const
{
    return m_dbPassword;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string RsCredentials::GetIdpToken() const
{
	return m_idpToken;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetIdpToken(const rs_string& in_idpToken)
{
	m_idpToken = in_idpToken;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetDbPassword(const rs_string& in_dbPassword)
{
    m_dbPassword = in_dbPassword;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
long RsCredentials::GetExpirationTime() const
{
    return m_expirationTime;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetFixExpirationTime()
{
	long currentTime = Aws::Utils::DateTime::Now().Millis();

	m_expirationTime = currentTime + (15 * 60 * 1000);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetExpirationTime(long in_expirationTime)
{
    m_expirationTime = in_expirationTime;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
rs_string RsCredentials::GetHost() const
{
    return m_host;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetHost(const rs_string& in_host)
{
    m_host = in_host;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
short RsCredentials::GetPort() const
{
    return m_port;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void RsCredentials::SetPort(short in_port)
{
    m_port = in_port;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
RsCredentials::~RsCredentials()
{
    /* Do nothing */
}

