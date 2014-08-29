#include "inc/basictypes.h"
#include "base/misc.h"

#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

namespace wi {

const dword kdwProtocolCurrent = 0x485407d3;

const byte XMSG_NONE = 0x00;
const byte XMSG_HANDSHAKE = 0x81;
const byte XMSG_HANDSHAKERESULT = 0x82;
const byte XMSG_SHOWMESSAGE = 0x83;
const byte XMSG_ECHO = 0x84;
const byte XMSG_PROTOCOLERROR = 0x85;
const byte XMSG_LOGIN = 0x92;
const byte XMSG_LOGINRESULT = 0x93;
const byte XMSG_SIGNOUT = 0x94;
const byte XMSG_SIGNOUTRESULT = 0x95;
const byte XMSG_LOBBYJOIN = 0xa0;
const byte XMSG_LOBBYJOINRESULT = 0xa1;
const byte XMSG_LOBBYCREATEROOM = 0xa2;
const byte XMSG_LOBBYCREATEROOMRESULT = 0xa3;
const byte XMSG_LOBBYCANJOINROOM = 0xa4;
const byte XMSG_LOBBYCANJOINROOMRESULT = 0xa5;
const byte XMSG_LOBBYLURKERCOUNT = 0xa6;
const byte XMSG_LOBBYADDROOM = 0xa7;
const byte XMSG_LOBBYREMOVEROOM = 0xa8;
const byte XMSG_LOBBYUPDATEROOM = 0xa9;
const byte XMSG_LOBBYLEAVE = 0xaa;
const byte XMSG_LOBBYLEAVERESULT = 0xab;
const byte XMSG_ROOMJOIN = 0xb0;
const byte XMSG_ROOMJOINRESULT = 0xb1;
const byte XMSG_ROOMADDPLAYER = 0xb2;
const byte XMSG_ROOMREMOVEPLAYER = 0xb3;
const byte XMSG_ROOMSENDCHAT = 0xb4;
const byte XMSG_ROOMRECEIVECHAT = 0xb5;
const byte XMSG_ROOMADDGAME = 0xb6;
const byte XMSG_ROOMREMOVEGAME = 0xb7;
const byte XMSG_ROOMGAMEINPROGRESS = 0xb8;
const byte XMSG_ROOMGAMEPLAYERNAMES = 0xb9;
const byte XMSG_ROOMSTATUSCOMPLETE = 0xba;
const byte XMSG_ROOMCREATEGAME = 0xbb;
const byte XMSG_ROOMCREATEGAMERESULT = 0xbc;
const byte XMSG_ROOMCANJOINGAME = 0xbd;
const byte XMSG_ROOMCANJOINGAMERESULT = 0xbe;
const byte XMSG_ROOMLEAVE = 0xbf;
const byte XMSG_ROOMLEAVERESULT = 0xc0;
const byte XMSG_GAMEJOIN = 0xd0;
const byte XMSG_GAMEJOINRESULT = 0xd1;
const byte XMSG_GAMESENDCHAT = 0xd2;
const byte XMSG_GAMERECEIVECHAT = 0xd3;
const byte XMSG_GAMENETMESSAGE = 0xd4;
const byte XMSG_GAMEUPDATEEMPTY = 0xd5;
const byte XMSG_GAMEUPDATERESULT = 0xd6;
const byte XMSG_GAMEKILLED = 0xd7;
const byte XMSG_GAMELEAVE = 0xd8;
const byte XMSG_GAMELEAVERESULT = 0xd9;

STARTLABEL(XMsgLabels)
    LABEL(XMSG_NONE)
    LABEL(XMSG_HANDSHAKE)
    LABEL(XMSG_HANDSHAKERESULT)
    LABEL(XMSG_SHOWMESSAGE)
    LABEL(XMSG_ECHO)
    LABEL(XMSG_PROTOCOLERROR)
    LABEL(XMSG_LOGIN)
    LABEL(XMSG_LOGINRESULT)
    LABEL(XMSG_SIGNOUT)
    LABEL(XMSG_SIGNOUTRESULT)
    LABEL(XMSG_LOBBYJOIN)
    LABEL(XMSG_LOBBYJOINRESULT)
    LABEL(XMSG_LOBBYCREATEROOM)
    LABEL(XMSG_LOBBYCREATEROOMRESULT)
    LABEL(XMSG_LOBBYCANJOINROOM)
    LABEL(XMSG_LOBBYCANJOINROOMRESULT)
    LABEL(XMSG_LOBBYLURKERCOUNT)
    LABEL(XMSG_LOBBYADDROOM)
    LABEL(XMSG_LOBBYREMOVEROOM)
    LABEL(XMSG_LOBBYUPDATEROOM)
    LABEL(XMSG_LOBBYLEAVE)
    LABEL(XMSG_LOBBYLEAVERESULT)
    LABEL(XMSG_ROOMJOIN)
    LABEL(XMSG_ROOMJOINRESULT)
    LABEL(XMSG_ROOMADDPLAYER)
    LABEL(XMSG_ROOMREMOVEPLAYER)
    LABEL(XMSG_ROOMSENDCHAT)
    LABEL(XMSG_ROOMRECEIVECHAT)
    LABEL(XMSG_ROOMADDGAME)
    LABEL(XMSG_ROOMREMOVEGAME)
    LABEL(XMSG_ROOMGAMEINPROGRESS)
    LABEL(XMSG_ROOMGAMEPLAYERNAMES)
    LABEL(XMSG_ROOMSTATUSCOMPLETE)
    LABEL(XMSG_ROOMCREATEGAME)
    LABEL(XMSG_ROOMCREATEGAMERESULT)
    LABEL(XMSG_ROOMCANJOINGAME)
    LABEL(XMSG_ROOMCANJOINGAMERESULT)
    LABEL(XMSG_ROOMLEAVE)
    LABEL(XMSG_ROOMLEAVERESULT)
    LABEL(XMSG_GAMEJOIN)
    LABEL(XMSG_GAMEJOINRESULT)
    LABEL(XMSG_GAMESENDCHAT)
    LABEL(XMSG_GAMERECEIVECHAT)
    LABEL(XMSG_GAMENETMESSAGE)
    LABEL(XMSG_GAMEUPDATEEMPTY)
    LABEL(XMSG_GAMEUPDATERESULT)
    LABEL(XMSG_GAMEKILLED)
    LABEL(XMSG_GAMELEAVE)
    LABEL(XMSG_GAMELEAVERESULT)
ENDLABEL(XMsgLabels)

} // namespace wi

#endif // __CONSTANTS_H__
