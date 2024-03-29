/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct CDXTicket {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    struct {
        unsigned char _field1[6];
        unsigned short _field2;
    } _field5;
    unsigned int _field6;
    unsigned char _field7[0];
};

struct _opaque_pthread_cond_t {
    long __sig;
    char __opaque[24];
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

struct in_addr {
    unsigned int s_addr;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct tagCONNRESULT {
    int iCallID;
    int iRole;
    int iRemoteCallID;
    int proto;
    int bIfRelay;
    unsigned short wRelayServType;
    unsigned short wChannelNumber;
    struct tagIPPORT mbLocal;
    struct tagIPPORT mbRemote;
    struct tagIPPORT mbSrc;
    struct tagIPPORT mbDst;
    struct tagIPPORT mbRemoteSrc;
    struct tagIPPORT mbRelayExt;
    unsigned int dwRTT;
    int bIfLocalCellularQoS;
    int bIfRemoteCellularQoS;
    int iLocalCellTech;
    int iRemoteCellTech;
    unsigned short wCellularMTU;
};

struct tagIPPORT {
    int iFlags;
    char szIfName[16];
    union {
        unsigned int dwIPv4;
        unsigned char abIPv6[16];
    } IP;
    unsigned short wPort;
};

struct tagVoiceChatBeacon {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    char *_field2;
    int _field3;
    unsigned int _field4;
} CDStruct_68f9d01f;

