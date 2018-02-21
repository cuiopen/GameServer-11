#ifndef _USER_MGR_H
#define _USER_MGR_H

#include <imodule.hpp>
#include <user.pb.h>
#include <map>

struct User
{
    int32_t id;
};

class UserMgr : public IModule
{
public:
    virtual bool Initialize();
    virtual bool Start();
    virtual void Stop();

    virtual std::string GetModuleName() { return "UserMgr"; }

private:
    void Login(ISender * sender, user::LoginReq & login_req);
    void Logout(ISender * sender, user::LogoutReq & logout_req);
    void Register(ISender * sender, user::Player & player);

    bool ValidateRegisterReq(const user::Player & register_req);

    void OnConnectClose(proto::EventBuff & buff);
private:
    std::map< int32_t, User > user_map_;
};

#endif // _USER_MGR_H

