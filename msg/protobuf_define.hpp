#ifndef _PROTOBUF_DEFINE_HPP
#define _PROTOBUF_DEFINE_HPP

#include <base.pb.h>

enum C2SProtobuf
{
    kC2SLogin,
    kC2SRegister,
    kC2SLogout,
    kC2SCreateRoom,
    kC2SEnterRoom,
    kC2SLeaveRoom,
    kC2SGetRoom,
    kC2SReady,
    kC2SLandlord,
    kC2SPlay,
};

enum S2CProtobuf
{
    kS2CError,

    kS2CLogin,
    kS2CRegister,
    kS2CLogout,

    kS2CCreateRoom,
    kS2CEnterRoom,
    kS2CLeaveRoom,
    kS2CReady,
    kS2CGetRoom,
    kS2CEnterRoomNtf,
    kS2CLeaveRoomNtf,
    kS2CReadyNtf,
    kS2CGameBeginNtf,
    kS2CPutCardNtf,
    kS2CPutLandlordCardNtf,
    kS2CLandlord, // 请求地主响应
    kS2CLandlordNtf, // 请求地主通知
    kS2CPlay,
    kS2CPlayNtf,
    kS2CGameOverNtf,
};

#endif
