/***********************************************************************
 * Copyright (C) 2014, Nanjing WFNEX Technology Co., Ltd 
**********************************************************************/

#ifndef CAUTHMGRTEST_H
#define CAUTHMGRTEST_H
#include "IAuthManager.h"
#include "aceinclude.h"

class CAuthManager : public IAuthManager
{
public:
    CAuthManager();
    virtual ~CAuthManager();
    virtual int OpenWithSink(IAuthManagerSink *psink);
    virtual int Close();
    virtual int AuthRequest(const Auth_Request *request);
private:
    IAuthManagerSink *m_psink;
};

#endif//CAUTHMGRTEST_H
