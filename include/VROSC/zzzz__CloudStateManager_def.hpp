#pragma once
// IWYU pragma private; include "VROSC/CloudStateManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStateManager)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
struct CloudStateManager_DownloadState;
}
namespace VROSC {
struct CloudStateManager_UploadState;
}
namespace VROSC {
class CloudStateManager__CoDeleteSession_d__23;
}
namespace VROSC {
class CloudStateManager__CoDownloadSession_d__18;
}
namespace VROSC {
class CloudStateManager__CoUploadSession_d__20;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass18_0;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass20_0;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass22_0;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass23_0;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
struct CloudStateManager_DownloadState;
}
namespace VROSC {
struct CloudStateManager_UploadState;
}
namespace VROSC {
class CloudStateManager;
}
namespace VROSC {
class CloudStateManager__CoDeleteSession_d__23;
}
namespace VROSC {
class CloudStateManager__CoDownloadSession_d__18;
}
namespace VROSC {
class CloudStateManager__CoUploadSession_d__20;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass18_0;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass20_0;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass22_0;
}
namespace VROSC {
class CloudStateManager___c__DisplayClass23_0;
}
// Write type traits
MARK_VAL_T(::VROSC::CloudStateManager_DownloadState);
MARK_VAL_T(::VROSC::CloudStateManager_UploadState);
MARK_REF_PTR_T(::VROSC::CloudStateManager);
MARK_REF_PTR_T(::VROSC::CloudStateManager__CoDeleteSession_d__23);
MARK_REF_PTR_T(::VROSC::CloudStateManager__CoDownloadSession_d__18);
MARK_REF_PTR_T(::VROSC::CloudStateManager__CoUploadSession_d__20);
MARK_REF_PTR_T(::VROSC::CloudStateManager___c__DisplayClass18_0);
MARK_REF_PTR_T(::VROSC::CloudStateManager___c__DisplayClass20_0);
MARK_REF_PTR_T(::VROSC::CloudStateManager___c__DisplayClass22_0);
MARK_REF_PTR_T(::VROSC::CloudStateManager___c__DisplayClass23_0);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.CloudStateManager/DownloadState
struct CORDL_TYPE CloudStateManager_DownloadState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CloudStateManager_DownloadState_Unwrapped
enum struct __CloudStateManager_DownloadState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DownloadingSession = static_cast<int32_t>(0x1),
__E_Waiting = static_cast<int32_t>(0x2),
__E_DownloadedSession = static_cast<int32_t>(0x3),
__E_Abort = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloudStateManager_DownloadState_Unwrapped () const noexcept {
return static_cast<__CloudStateManager_DownloadState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager_DownloadState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CloudStateManager_DownloadState(int32_t  value__) noexcept;

/// @brief Field Abort value: I32(4)
static ::VROSC::CloudStateManager_DownloadState const Abort;

/// @brief Field DownloadedSession value: I32(3)
static ::VROSC::CloudStateManager_DownloadState const DownloadedSession;

/// @brief Field DownloadingSession value: I32(1)
static ::VROSC::CloudStateManager_DownloadState const DownloadingSession;

/// @brief Field None value: I32(0)
static ::VROSC::CloudStateManager_DownloadState const None;

/// @brief Field Waiting value: I32(2)
static ::VROSC::CloudStateManager_DownloadState const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager_DownloadState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager_DownloadState, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.CloudStateManager/UploadState
struct CORDL_TYPE CloudStateManager_UploadState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CloudStateManager_UploadState_Unwrapped
enum struct __CloudStateManager_UploadState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_UploadingSession = static_cast<int32_t>(0x1),
__E_Waiting = static_cast<int32_t>(0x2),
__E_UploadedSession = static_cast<int32_t>(0x3),
__E_Abort = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloudStateManager_UploadState_Unwrapped () const noexcept {
return static_cast<__CloudStateManager_UploadState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager_UploadState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CloudStateManager_UploadState(int32_t  value__) noexcept;

/// @brief Field Abort value: I32(4)
static ::VROSC::CloudStateManager_UploadState const Abort;

/// @brief Field None value: I32(0)
static ::VROSC::CloudStateManager_UploadState const None;

/// @brief Field UploadedSession value: I32(3)
static ::VROSC::CloudStateManager_UploadState const UploadedSession;

/// @brief Field UploadingSession value: I32(1)
static ::VROSC::CloudStateManager_UploadState const UploadingSession;

/// @brief Field Waiting value: I32(2)
static ::VROSC::CloudStateManager_UploadState const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager_UploadState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager_UploadState, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<>c__DisplayClass18_0
class CORDL_TYPE CloudStateManager___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sessionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

static inline ::VROSC::CloudStateManager___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <CoDownloadSession>b__0, addr 0x18323e8, size 0x94, virtual false, abstract: false, final false
inline void _CoDownloadSession_b__0() ;

/// @brief Method <CoDownloadSession>b__1, addr 0x183247c, size 0x80, virtual false, abstract: false, final false
inline void _CoDownloadSession_b__1(float_t  p) ;

/// @brief Method <CoDownloadSession>b__2, addr 0x18324fc, size 0x80, virtual false, abstract: false, final false
inline void _CoDownloadSession_b__2(::VROSC::Error  e) ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x18323e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager___c__DisplayClass18_0(CloudStateManager___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager___c__DisplayClass18_0(CloudStateManager___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{332};

/// @brief Field sessionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass18_0, ___sessionName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<>c__DisplayClass20_0
class CORDL_TYPE CloudStateManager___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action*  __9__3;

/// @brief Field <>9__4, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<float_t>*  __9__4;

/// @brief Field <>9__5, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field hasPreview, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPreview, put=__cordl_internal_set_hasPreview)) bool  hasPreview;

/// @brief Field isCommunity, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCommunity, put=__cordl_internal_set_isCommunity)) bool  isCommunity;

/// @brief Field sessionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

static inline ::VROSC::CloudStateManager___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <CoUploadSession>b__0, addr 0x1832584, size 0x220, virtual false, abstract: false, final false
inline void _CoUploadSession_b__0() ;

/// @brief Method <CoUploadSession>b__1, addr 0x1832c28, size 0x80, virtual false, abstract: false, final false
inline void _CoUploadSession_b__1(float_t  progress) ;

/// @brief Method <CoUploadSession>b__2, addr 0x1832ca8, size 0x80, virtual false, abstract: false, final false
inline void _CoUploadSession_b__2(::VROSC::Error  error) ;

/// @brief Method <CoUploadSession>b__3, addr 0x1832a94, size 0x94, virtual false, abstract: false, final false
inline void _CoUploadSession_b__3() ;

/// @brief Method <CoUploadSession>b__4, addr 0x1832b28, size 0x80, virtual false, abstract: false, final false
inline void _CoUploadSession_b__4(float_t  progress) ;

/// @brief Method <CoUploadSession>b__5, addr 0x1832ba8, size 0x80, virtual false, abstract: false, final false
inline void _CoUploadSession_b__5(::VROSC::Error  error) ;

constexpr ::System::Action* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr bool const& __cordl_internal_get_hasPreview() const;

constexpr bool& __cordl_internal_get_hasPreview() ;

constexpr bool const& __cordl_internal_get_isCommunity() const;

constexpr bool& __cordl_internal_get_isCommunity() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set___9__3(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_hasPreview(bool  value) ;

constexpr void __cordl_internal_set_isCommunity(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x183257c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager___c__DisplayClass20_0(CloudStateManager___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager___c__DisplayClass20_0(CloudStateManager___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{333};

/// @brief Field hasPreview, offset: 0x10, size: 0x1, def value: None
 bool  ___hasPreview;

/// @brief Field sessionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field isCommunity, offset: 0x20, size: 0x1, def value: None
 bool  ___isCommunity;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  _____9__3;

/// @brief Field <>9__4, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<float_t>*  _____9__4;

/// @brief Field <>9__5, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass20_0, ___hasPreview) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass20_0, ___sessionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass20_0, ___isCommunity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass20_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass20_0, _____9__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass20_0, _____9__5) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager___c__DisplayClass20_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<>c__DisplayClass22_0
class CORDL_TYPE CloudStateManager___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field isOgg, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOgg, put=__cordl_internal_set_isOgg)) bool  isOgg;

/// @brief Field sessionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

static inline ::VROSC::CloudStateManager___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <DownloadPreview>b__0, addr 0x1832d28, size 0x98, virtual false, abstract: false, final false
inline void _DownloadPreview_b__0(::StringW  file) ;

/// @brief Method <DownloadPreview>b__1, addr 0x1832dc0, size 0x80, virtual false, abstract: false, final false
inline void _DownloadPreview_b__1(float_t  p) ;

/// @brief Method <DownloadPreview>b__2, addr 0x1832e40, size 0x80, virtual false, abstract: false, final false
inline void _DownloadPreview_b__2(::VROSC::Error  e) ;

constexpr bool const& __cordl_internal_get_isOgg() const;

constexpr bool& __cordl_internal_get_isOgg() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set_isOgg(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x183208c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager___c__DisplayClass22_0(CloudStateManager___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager___c__DisplayClass22_0(CloudStateManager___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{334};

/// @brief Field sessionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field isOgg, offset: 0x18, size: 0x1, def value: None
 bool  ___isOgg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass22_0, ___sessionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass22_0, ___isOgg) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager___c__DisplayClass22_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<>c__DisplayClass23_0
class CORDL_TYPE CloudStateManager___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action*  __9__2;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field isCommunity, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCommunity, put=__cordl_internal_set_isCommunity)) bool  isCommunity;

/// @brief Field isOgg, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOgg, put=__cordl_internal_set_isOgg)) bool  isOgg;

/// @brief Field sessionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

static inline ::VROSC::CloudStateManager___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <CoDeleteSession>b__0, addr 0x1832ec8, size 0x16c, virtual false, abstract: false, final false
inline void _CoDeleteSession_b__0() ;

/// @brief Method <CoDeleteSession>b__1, addr 0x1833294, size 0x80, virtual false, abstract: false, final false
inline void _CoDeleteSession_b__1(::VROSC::Error  e) ;

/// @brief Method <CoDeleteSession>b__2, addr 0x1833154, size 0x6c, virtual false, abstract: false, final false
inline void _CoDeleteSession_b__2() ;

/// @brief Method <CoDeleteSession>b__3, addr 0x18331c0, size 0xd4, virtual false, abstract: false, final false
inline void _CoDeleteSession_b__3(::VROSC::Error  e) ;

constexpr ::System::Action* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr bool const& __cordl_internal_get_isCommunity() const;

constexpr bool& __cordl_internal_get_isCommunity() ;

constexpr bool const& __cordl_internal_get_isOgg() const;

constexpr bool& __cordl_internal_get_isOgg() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set___9__2(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_isCommunity(bool  value) ;

constexpr void __cordl_internal_set_isOgg(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1832ec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager___c__DisplayClass23_0(CloudStateManager___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager___c__DisplayClass23_0(CloudStateManager___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{335};

/// @brief Field sessionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field isCommunity, offset: 0x18, size: 0x1, def value: None
 bool  ___isCommunity;

/// @brief Field isOgg, offset: 0x19, size: 0x1, def value: None
 bool  ___isOgg;

/// @brief Field <>9__2, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  _____9__2;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass23_0, ___sessionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass23_0, ___isCommunity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass23_0, ___isOgg) == 0x19, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass23_0, _____9__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager___c__DisplayClass23_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager___c__DisplayClass23_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<CoDeleteSession>d__23
class CORDL_TYPE CloudStateManager__CoDeleteSession_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::CloudStateManager>  __4__this;

/// @brief Field <>8__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::VROSC::CloudStateManager___c__DisplayClass23_0*  __8__1;

/// @brief Field isCommunity, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCommunity, put=__cordl_internal_set_isCommunity)) bool  isCommunity;

/// @brief Field isOgg, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOgg, put=__cordl_internal_set_isOgg)) bool  isOgg;

/// @brief Field sessionName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1833318, size 0x288, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::CloudStateManager__CoDeleteSession_d__23* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18336b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18336c0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18336f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1833314, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::CloudStateManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::CloudStateManager>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::CloudStateManager___c__DisplayClass23_0* const& __cordl_internal_get___8__1() const;

constexpr ::VROSC::CloudStateManager___c__DisplayClass23_0*& __cordl_internal_get___8__1() ;

constexpr bool const& __cordl_internal_get_isCommunity() const;

constexpr bool& __cordl_internal_get_isCommunity() ;

constexpr bool const& __cordl_internal_get_isOgg() const;

constexpr bool& __cordl_internal_get_isOgg() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::CloudStateManager>  value) ;

constexpr void __cordl_internal_set___8__1(::VROSC::CloudStateManager___c__DisplayClass23_0*  value) ;

constexpr void __cordl_internal_set_isCommunity(bool  value) ;

constexpr void __cordl_internal_set_isOgg(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x18323b0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager__CoDeleteSession_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager__CoDeleteSession_d__23", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager__CoDeleteSession_d__23(CloudStateManager__CoDeleteSession_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager__CoDeleteSession_d__23", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager__CoDeleteSession_d__23(CloudStateManager__CoDeleteSession_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{336};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sessionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field isCommunity, offset: 0x28, size: 0x1, def value: None
 bool  ___isCommunity;

/// @brief Field isOgg, offset: 0x29, size: 0x1, def value: None
 bool  ___isOgg;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::CloudStateManager>  _____4__this;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::VROSC::CloudStateManager___c__DisplayClass23_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, ___sessionName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, ___isCommunity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, ___isOgg) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDeleteSession_d__23, _____8__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager__CoDeleteSession_d__23, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<CoDownloadSession>d__18
class CORDL_TYPE CloudStateManager__CoDownloadSession_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::CloudStateManager>  __4__this;

/// @brief Field <>8__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::VROSC::CloudStateManager___c__DisplayClass18_0*  __8__1;

/// @brief Field isCommunity, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCommunity, put=__cordl_internal_set_isCommunity)) bool  isCommunity;

/// @brief Field sessionName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

/// @brief Field userId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) ::StringW  userId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1833704, size 0x2c4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::CloudStateManager__CoDownloadSession_d__18* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1833c78, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1833c80, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1833cb8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1833700, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::CloudStateManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::CloudStateManager>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::CloudStateManager___c__DisplayClass18_0* const& __cordl_internal_get___8__1() const;

constexpr ::VROSC::CloudStateManager___c__DisplayClass18_0*& __cordl_internal_get___8__1() ;

constexpr bool const& __cordl_internal_get_isCommunity() const;

constexpr bool& __cordl_internal_get_isCommunity() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr ::StringW const& __cordl_internal_get_userId() const;

constexpr ::StringW& __cordl_internal_get_userId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::CloudStateManager>  value) ;

constexpr void __cordl_internal_set___8__1(::VROSC::CloudStateManager___c__DisplayClass18_0*  value) ;

constexpr void __cordl_internal_set_isCommunity(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

constexpr void __cordl_internal_set_userId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1831a9c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager__CoDownloadSession_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager__CoDownloadSession_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager__CoDownloadSession_d__18(CloudStateManager__CoDownloadSession_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager__CoDownloadSession_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager__CoDownloadSession_d__18(CloudStateManager__CoDownloadSession_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{337};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sessionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::CloudStateManager>  _____4__this;

/// @brief Field userId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___userId;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::VROSC::CloudStateManager___c__DisplayClass18_0*  _____8__1;

/// @brief Field isCommunity, offset: 0x40, size: 0x1, def value: None
 bool  ___isCommunity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, ___sessionName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, ___userId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, _____8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoDownloadSession_d__18, ___isCommunity) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager__CoDownloadSession_d__18, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager/<CoUploadSession>d__20
class CORDL_TYPE CloudStateManager__CoUploadSession_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::CloudStateManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::VROSC::CloudStateManager___c__DisplayClass20_0*  __8__1;

/// @brief Field hasPreview, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPreview, put=__cordl_internal_set_hasPreview)) bool  hasPreview;

/// @brief Field isCommunity, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCommunity, put=__cordl_internal_set_isCommunity)) bool  isCommunity;

/// @brief Field sessionName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1833cc4, size 0x2d4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::CloudStateManager__CoUploadSession_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1834208, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1834210, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1834248, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1833cc0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::CloudStateManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::CloudStateManager>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::CloudStateManager___c__DisplayClass20_0* const& __cordl_internal_get___8__1() const;

constexpr ::VROSC::CloudStateManager___c__DisplayClass20_0*& __cordl_internal_get___8__1() ;

constexpr bool const& __cordl_internal_get_hasPreview() const;

constexpr bool& __cordl_internal_get_hasPreview() ;

constexpr bool const& __cordl_internal_get_isCommunity() const;

constexpr bool& __cordl_internal_get_isCommunity() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::CloudStateManager>  value) ;

constexpr void __cordl_internal_set___8__1(::VROSC::CloudStateManager___c__DisplayClass20_0*  value) ;

constexpr void __cordl_internal_set_hasPreview(bool  value) ;

constexpr void __cordl_internal_set_isCommunity(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1831cbc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager__CoUploadSession_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager__CoUploadSession_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager__CoUploadSession_d__20(CloudStateManager__CoUploadSession_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager__CoUploadSession_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager__CoUploadSession_d__20(CloudStateManager__CoUploadSession_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{338};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field hasPreview, offset: 0x20, size: 0x1, def value: None
 bool  ___hasPreview;

/// @brief Field sessionName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field isCommunity, offset: 0x30, size: 0x1, def value: None
 bool  ___isCommunity;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::CloudStateManager>  _____4__this;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::CloudStateManager___c__DisplayClass20_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, ___hasPreview) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, ___sessionName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, ___isCommunity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager__CoUploadSession_d__20, _____8__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager__CoUploadSession_d__20, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.CloudStateManager::DownloadState, VROSC.CloudStateManager::UploadState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudStateManager
class CORDL_TYPE CloudStateManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DownloadState = ::VROSC::CloudStateManager_DownloadState;

using UploadState = ::VROSC::CloudStateManager_UploadState;

using _CoDeleteSession_d__23 = ::VROSC::CloudStateManager__CoDeleteSession_d__23;

using _CoDownloadSession_d__18 = ::VROSC::CloudStateManager__CoDownloadSession_d__18;

using _CoUploadSession_d__20 = ::VROSC::CloudStateManager__CoUploadSession_d__20;

using __c__DisplayClass18_0 = ::VROSC::CloudStateManager___c__DisplayClass18_0;

using __c__DisplayClass20_0 = ::VROSC::CloudStateManager___c__DisplayClass20_0;

using __c__DisplayClass22_0 = ::VROSC::CloudStateManager___c__DisplayClass22_0;

using __c__DisplayClass23_0 = ::VROSC::CloudStateManager___c__DisplayClass23_0;

/// @brief Field OnDeleteSessionFromCloudFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDeleteSessionFromCloudFailure, put=setStaticF_OnDeleteSessionFromCloudFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnDeleteSessionFromCloudFailure;

/// @brief Field OnDeleteSessionFromCloudSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDeleteSessionFromCloudSuccess, put=setStaticF_OnDeleteSessionFromCloudSuccess)) ::System::Action_1<::StringW>*  OnDeleteSessionFromCloudSuccess;

/// @brief Field OnDownloadPreviewFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDownloadPreviewFailure, put=setStaticF_OnDownloadPreviewFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnDownloadPreviewFailure;

/// @brief Field OnDownloadPreviewProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDownloadPreviewProgress, put=setStaticF_OnDownloadPreviewProgress)) ::System::Action_2<::StringW,float_t>*  OnDownloadPreviewProgress;

/// @brief Field OnDownloadPreviewSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDownloadPreviewSuccess, put=setStaticF_OnDownloadPreviewSuccess)) ::System::Action_2<::StringW,bool>*  OnDownloadPreviewSuccess;

/// @brief Field OnDownloadSessionFromCloudFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDownloadSessionFromCloudFailure, put=setStaticF_OnDownloadSessionFromCloudFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnDownloadSessionFromCloudFailure;

/// @brief Field OnDownloadSessionFromCloudProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDownloadSessionFromCloudProgress, put=setStaticF_OnDownloadSessionFromCloudProgress)) ::System::Action_2<::StringW,float_t>*  OnDownloadSessionFromCloudProgress;

/// @brief Field OnDownloadSessionFromCloudSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDownloadSessionFromCloudSuccess, put=setStaticF_OnDownloadSessionFromCloudSuccess)) ::System::Action_1<::StringW>*  OnDownloadSessionFromCloudSuccess;

/// @brief Field OnUploadSessionPreviewToCloudProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUploadSessionPreviewToCloudProgress, put=setStaticF_OnUploadSessionPreviewToCloudProgress)) ::System::Action_2<::StringW,float_t>*  OnUploadSessionPreviewToCloudProgress;

/// @brief Field OnUploadSessionToCloudFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUploadSessionToCloudFailure, put=setStaticF_OnUploadSessionToCloudFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnUploadSessionToCloudFailure;

/// @brief Field OnUploadSessionToCloudProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUploadSessionToCloudProgress, put=setStaticF_OnUploadSessionToCloudProgress)) ::System::Action_2<::StringW,float_t>*  OnUploadSessionToCloudProgress;

/// @brief Field OnUploadSessionToCloudSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUploadSessionToCloudSuccess, put=setStaticF_OnUploadSessionToCloudSuccess)) ::System::Action_1<::StringW>*  OnUploadSessionToCloudSuccess;

/// @brief Field _currentDownloadState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentDownloadState, put=__cordl_internal_set__currentDownloadState)) ::VROSC::CloudStateManager_DownloadState  _currentDownloadState;

/// @brief Field _currentUploadState, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentUploadState, put=__cordl_internal_set__currentUploadState)) ::VROSC::CloudStateManager_UploadState  _currentUploadState;

/// @brief Method Awake, addr 0x18316fc, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CoDeleteSession, addr 0x1831e4c, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoDeleteSession(::StringW  sessionName, bool  isCommunity, bool  isOgg) ;

/// @brief Method CoDownloadSession, addr 0x1831a14, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoDownloadSession(::StringW  sessionName, ::StringW  userId, bool  isCommunity) ;

/// @brief Method CoUploadSession, addr 0x1831c2c, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoUploadSession(::StringW  sessionName, bool  isCommunity, bool  hasPreview) ;

/// @brief Method DeleteSessionFromCloud, addr 0x1831ce4, size 0x168, virtual false, abstract: false, final false
inline void DeleteSessionFromCloud(::StringW  sessionName, bool  isCommunity, bool  isOgg) ;

/// @brief Method DownloadPreview, addr 0x1831edc, size 0x1b0, virtual false, abstract: false, final false
inline void DownloadPreview(::StringW  sessionName, ::StringW  userId, bool  isCommunity, bool  isOgg) ;

/// @brief Method DownloadSessionFromCloud, addr 0x18318ac, size 0x168, virtual false, abstract: false, final false
inline void DownloadSessionFromCloud(::StringW  sessionName, ::StringW  userId, bool  isCommunity) ;

static inline ::VROSC::CloudStateManager* New_ctor() ;

/// @brief Method UploadSessionToCloud, addr 0x1831ac4, size 0x168, virtual false, abstract: false, final false
inline void UploadSessionToCloud(::StringW  sessionName, bool  isCommunity, bool  hasPreview) ;

constexpr ::VROSC::CloudStateManager_DownloadState const& __cordl_internal_get__currentDownloadState() const;

constexpr ::VROSC::CloudStateManager_DownloadState& __cordl_internal_get__currentDownloadState() ;

constexpr ::VROSC::CloudStateManager_UploadState const& __cordl_internal_get__currentUploadState() const;

constexpr ::VROSC::CloudStateManager_UploadState& __cordl_internal_get__currentUploadState() ;

constexpr void __cordl_internal_set__currentDownloadState(::VROSC::CloudStateManager_DownloadState  value) ;

constexpr void __cordl_internal_set__currentUploadState(::VROSC::CloudStateManager_UploadState  value) ;

/// @brief Method .ctor, addr 0x18323d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnDeleteSessionFromCloudFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnDeleteSessionFromCloudSuccess() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnDownloadPreviewFailure() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnDownloadPreviewProgress() ;

static inline ::System::Action_2<::StringW,bool>* getStaticF_OnDownloadPreviewSuccess() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnDownloadSessionFromCloudFailure() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnDownloadSessionFromCloudProgress() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnDownloadSessionFromCloudSuccess() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnUploadSessionPreviewToCloudProgress() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnUploadSessionToCloudFailure() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnUploadSessionToCloudProgress() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnUploadSessionToCloudSuccess() ;

static inline void setStaticF_OnDeleteSessionFromCloudFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnDeleteSessionFromCloudSuccess(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnDownloadPreviewFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnDownloadPreviewProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnDownloadPreviewSuccess(::System::Action_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnDownloadSessionFromCloudFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnDownloadSessionFromCloudProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnDownloadSessionFromCloudSuccess(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnUploadSessionPreviewToCloudProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnUploadSessionToCloudFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnUploadSessionToCloudProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnUploadSessionToCloudSuccess(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudStateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudStateManager(CloudStateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudStateManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudStateManager(CloudStateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{339};

/// @brief Field _currentDownloadState, offset: 0x20, size: 0x4, def value: None
 ::VROSC::CloudStateManager_DownloadState  ____currentDownloadState;

/// @brief Field _currentUploadState, offset: 0x24, size: 0x4, def value: None
 ::VROSC::CloudStateManager_UploadState  ____currentUploadState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudStateManager, ____currentDownloadState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudStateManager, ____currentUploadState) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudStateManager, 0x28>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager_DownloadState, "VROSC", "CloudStateManager/DownloadState");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager_UploadState, "VROSC", "CloudStateManager/UploadState");
NEED_NO_BOX(::VROSC::CloudStateManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager*, "VROSC", "CloudStateManager");
NEED_NO_BOX(::VROSC::CloudStateManager__CoDeleteSession_d__23);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager__CoDeleteSession_d__23*, "VROSC", "CloudStateManager/<CoDeleteSession>d__23");
NEED_NO_BOX(::VROSC::CloudStateManager__CoDownloadSession_d__18);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager__CoDownloadSession_d__18*, "VROSC", "CloudStateManager/<CoDownloadSession>d__18");
NEED_NO_BOX(::VROSC::CloudStateManager__CoUploadSession_d__20);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager__CoUploadSession_d__20*, "VROSC", "CloudStateManager/<CoUploadSession>d__20");
NEED_NO_BOX(::VROSC::CloudStateManager___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager___c__DisplayClass18_0*, "VROSC", "CloudStateManager/<>c__DisplayClass18_0");
NEED_NO_BOX(::VROSC::CloudStateManager___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager___c__DisplayClass20_0*, "VROSC", "CloudStateManager/<>c__DisplayClass20_0");
NEED_NO_BOX(::VROSC::CloudStateManager___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager___c__DisplayClass22_0*, "VROSC", "CloudStateManager/<>c__DisplayClass22_0");
NEED_NO_BOX(::VROSC::CloudStateManager___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudStateManager___c__DisplayClass23_0*, "VROSC", "CloudStateManager/<>c__DisplayClass23_0");
