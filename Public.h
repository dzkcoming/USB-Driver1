/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_USBDriver1,
    0xc476f553,0x95c5,0x4749,0xb7,0x2f,0x55,0x69,0x97,0xc7,0x06,0xe0);
// {c476f553-95c5-4749-b72f-556997c706e0}
