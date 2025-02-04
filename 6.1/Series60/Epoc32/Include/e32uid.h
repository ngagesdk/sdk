// E32UID.H
//
// Copyright (c) 1995-1999 Symbian Ltd.  All rights reserved.
//

#ifndef __E32UID_H__
#define __E32UID_H__
#include <e32std.h>

const TInt KDynamicLibraryUidValue=0x10000079;
const TInt KExecutableImageUidValue=0x1000007a;
const TUid KDynamicLibraryUid={KDynamicLibraryUidValue};
const TUid KExecutableImageUid={KExecutableImageUidValue};

#if defined(_UNICODE)
#define KLogicalDeviceDriverUidValue KLogicalDeviceDriverUidValue16
#define KLogicalDeviceDriverUid KLogicalDeviceDriverUid16
#else
#define KLogicalDeviceDriverUidValue KLogicalDeviceDriverUidValue8
#define KLogicalDeviceDriverUid KLogicalDeviceDriverUid8
#endif
const TInt KLogicalDeviceDriverUidValue16=0x100000af;
const TUid KLogicalDeviceDriverUid16={KLogicalDeviceDriverUidValue16};
const TInt KLogicalDeviceDriverUidValue8=0x100000ae;
const TUid KLogicalDeviceDriverUid8={KLogicalDeviceDriverUidValue8};

#if defined(_UNICODE)
#define KPhysicalDeviceDriverUidValue KPhysicalDeviceDriverUidValue16
#define KPhysicalDeviceDriverUid KPhysicalDeviceDriverUid16
#else
#define KPhysicalDeviceDriverUidValue KPhysicalDeviceDriverUidValue8
#define KPhysicalDeviceDriverUid KPhysicalDeviceDriverUid8
#endif
const TInt KPhysicalDeviceDriverUidValue16=0x100039d0;
const TUid KPhysicalDeviceDriverUid16={KPhysicalDeviceDriverUidValue16};
const TInt KPhysicalDeviceDriverUidValue8=0x100000ad;
const TUid KPhysicalDeviceDriverUid8={KPhysicalDeviceDriverUidValue8};

const TInt KMachineConfigurationUidValue=0x100000f4;
const TUid KMachineConfigurationUid={KMachineConfigurationUidValue};

#if defined(_UNICODE)
#define KLocaleDllUidValue KLocaleDllUidValue16
#define KLocaleDllUid KLocaleDllUid16
#else
#define KLocaleDllUidValue KLocaleDllUidValue8
#define KLocaleDllUid KLocaleDllUid8
#endif
const TInt KLocaleDllUidValue16=0x100039e6;
const TUid KLocaleDllUid16={KLocaleDllUidValue16};
const TInt KLocaleDllUidValue8=0x100000c3;
const TUid KLocaleDllUid8={KLocaleDllUidValue8};

const TInt KSharedLibraryUidValue=0x1000008d;
const TUid KSharedLibraryUid={KSharedLibraryUidValue};

const TInt KKeyboardUidValue=0x100000db;
const TUid KKeyboardUid={KKeyboardUidValue};

#if defined(_UNICODE)
#define KKeyboardDataUidValue KKeyboardDataUidValue16
#define KKeyboardDataUid KKeyboardDataUid16
#else
#define KKeyboardDataUidValue KKeyboardDataUidValue8
#define KKeyboardDataUid KKeyboardDataUid8
#endif
const TInt KKeyboardDataUidValue16=0x100039e0;
const TUid KKeyboardDataUid16={KKeyboardDataUidValue16};
const TInt KKeyboardDataUidValue8=0x100000dc;
const TUid KKeyboardDataUid8={KKeyboardDataUidValue8};

#if defined(_UNICODE)
#define KKeyboardTranUidValue KKeyboardTranUidValue16
#define KKeyboardTranUid KKeyboardTranUid16
#else
#define KKeyboardTranUidValue KKeyboardTranUidValue8
#define KKeyboardTranUid KKeyboardTranUid8
#endif
const TInt KKeyboardTranUidValue16=0x100039e1;
const TUid KKeyboardTranUid16={KKeyboardTranUidValue16};
const TInt KKeyboardTranUidValue8=0x100000dd;
const TUid KKeyboardTranUid8={KKeyboardTranUidValue8};


#if defined(_UNICODE)
#define KConsoleDllUidValue KConsoleDllUidValue16
#define KConsoleDllUid KConsoleDllUid16
#else
#define KConsoleDllUidValue KConsoleDllUidValue8
#define KConsoleDllUid KConsoleDllUid8
#endif
const TInt KConsoleDllUidValue16=0x100039e7;
const TUid KConsoleDllUid16={KConsoleDllUidValue16};
const TInt KConsoleDllUidValue8=0x100000c5;
const TUid KConsoleDllUid8={KConsoleDllUidValue8};

#endif

