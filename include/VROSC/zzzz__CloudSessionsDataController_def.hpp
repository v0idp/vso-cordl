#pragma once
// IWYU pragma private; include "VROSC/CloudSessionsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__SessionsDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CloudSessionsDataController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace VROSC {
class CloudSessionsDataController___c;
}
namespace VROSC {
class CloudSessionsDataController___c__DisplayClass4_0;
}
namespace VROSC {
class CloudSessionsDataController___c__DisplayClass6_0;
}
namespace VROSC {
class CloudSessionsDataController___c__DisplayClass7_0;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SessionUIData;
}
// Forward declare root types
namespace VROSC {
class CloudSessionsDataController;
}
namespace VROSC {
class CloudSessionsDataController___c;
}
namespace VROSC {
class CloudSessionsDataController___c__DisplayClass4_0;
}
namespace VROSC {
class CloudSessionsDataController___c__DisplayClass6_0;
}
namespace VROSC {
class CloudSessionsDataController___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CloudSessionsDataController);
MARK_REF_PTR_T(::VROSC::CloudSessionsDataController___c);
MARK_REF_PTR_T(::VROSC::CloudSessionsDataController___c__DisplayClass4_0);
MARK_REF_PTR_T(::VROSC::CloudSessionsDataController___c__DisplayClass6_0);
MARK_REF_PTR_T(::VROSC::CloudSessionsDataController___c__DisplayClass7_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudSessionsDataController/<>c
class CORDL_TYPE CloudSessionsDataController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::CloudSessionsDataController___c*  __9;

/// @brief Field <>9__4_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_2, put=setStaticF___9__4_2)) ::System::Func_2<::System::Object*,::StringW>*  __9__4_2;

static inline ::VROSC::CloudSessionsDataController___c* New_ctor() ;

/// @brief Method <LoadCloudData>b__4_2, addr 0x18536a0, size 0x24, virtual false, abstract: false, final false
inline ::StringW _LoadCloudData_b__4_2(::System::Object*  x) ;

/// @brief Method .ctor, addr 0x1853698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::CloudSessionsDataController___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Object*,::StringW>* getStaticF___9__4_2() ;

static inline void setStaticF___9(::VROSC::CloudSessionsDataController___c*  value) ;

static inline void setStaticF___9__4_2(::System::Func_2<::System::Object*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudSessionsDataController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudSessionsDataController___c(CloudSessionsDataController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudSessionsDataController___c(CloudSessionsDataController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{451};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CloudSessionsDataController___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudSessionsDataController/<>c__DisplayClass4_0
class CORDL_TYPE CloudSessionsDataController___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CloudSessionsDataController*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::CloudSessionsDataController___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <LoadCloudData>b__0, addr 0x18536c4, size 0xe14, virtual false, abstract: false, final false
inline void _LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data) ;

/// @brief Method <LoadCloudData>b__1, addr 0x18544d8, size 0x38, virtual false, abstract: false, final false
inline void _LoadCloudData_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::CloudSessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CloudSessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CloudSessionsDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1852cb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudSessionsDataController___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudSessionsDataController___c__DisplayClass4_0(CloudSessionsDataController___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudSessionsDataController___c__DisplayClass4_0(CloudSessionsDataController___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{452};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CloudSessionsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass4_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass4_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudSessionsDataController___c__DisplayClass4_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudSessionsDataController/<>c__DisplayClass6_0
class CORDL_TYPE CloudSessionsDataController___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CloudSessionsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

static inline ::VROSC::CloudSessionsDataController___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <SaveSessionToCloud>b__0, addr 0x1854510, size 0x128, virtual false, abstract: false, final false
inline void _SaveSessionToCloud_b__0() ;

constexpr ::VROSC::CloudSessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CloudSessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CloudSessionsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x18533cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudSessionsDataController___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudSessionsDataController___c__DisplayClass6_0(CloudSessionsDataController___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudSessionsDataController___c__DisplayClass6_0(CloudSessionsDataController___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{453};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CloudSessionsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass6_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudSessionsDataController___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudSessionsDataController/<>c__DisplayClass7_0
class CORDL_TYPE CloudSessionsDataController___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CloudSessionsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::CloudSessionsDataController___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <RemoveSession>b__0, addr 0x1854638, size 0x8c, virtual false, abstract: false, final false
inline void _RemoveSession_b__0() ;

constexpr ::VROSC::CloudSessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CloudSessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CloudSessionsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1853558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudSessionsDataController___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudSessionsDataController___c__DisplayClass7_0(CloudSessionsDataController___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudSessionsDataController___c__DisplayClass7_0(CloudSessionsDataController___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{454};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CloudSessionsDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass7_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CloudSessionsDataController___c__DisplayClass7_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudSessionsDataController___c__DisplayClass7_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SessionsDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudSessionsDataController
class CORDL_TYPE CloudSessionsDataController : public ::VROSC::SessionsDataController {
public:
// Declarations
using __c = ::VROSC::CloudSessionsDataController___c;

using __c__DisplayClass4_0 = ::VROSC::CloudSessionsDataController___c__DisplayClass4_0;

using __c__DisplayClass6_0 = ::VROSC::CloudSessionsDataController___c__DisplayClass6_0;

using __c__DisplayClass7_0 = ::VROSC::CloudSessionsDataController___c__DisplayClass7_0;

/// @brief Field _isWaitingForData, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWaitingForData, put=__cordl_internal_set__isWaitingForData)) bool  _isWaitingForData;

/// @brief Method GenerateNewSessionId, addr 0x1853560, size 0x84, virtual true, abstract: false, final false
inline ::StringW GenerateNewSessionId() ;

/// @brief Method GetSessionUIData, addr 0x1852964, size 0x16c, virtual true, abstract: false, final false
inline ::VROSC::SessionUIData* GetSessionUIData(::StringW  sessionId) ;

/// @brief Method GetSessionsUIData, addr 0x18526f8, size 0x26c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetSessionsUIData() ;

/// @brief Method LoadCloudData, addr 0x1852ad0, size 0x1e8, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::CloudSessionsDataController* New_ctor() ;

/// @brief Method RemoveSession, addr 0x18533d4, size 0x184, virtual true, abstract: false, final false
inline void RemoveSession(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveCloudData, addr 0x1852cc0, size 0x4, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveSessionToCloud, addr 0x1852cc4, size 0x708, virtual false, abstract: false, final false
inline void SaveSessionToCloud(::StringW  sessionId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method UserLoggedOut, addr 0x18535e4, size 0x58, virtual true, abstract: false, final false
inline void UserLoggedOut() ;

constexpr bool const& __cordl_internal_get__isWaitingForData() const;

constexpr bool& __cordl_internal_get__isWaitingForData() ;

constexpr void __cordl_internal_set__isWaitingForData(bool  value) ;

/// @brief Method .ctor, addr 0x185268c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudSessionsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudSessionsDataController(CloudSessionsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudSessionsDataController(CloudSessionsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{455};

/// @brief Field _isWaitingForData, offset: 0x30, size: 0x1, def value: None
 bool  ____isWaitingForData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CloudSessionsDataController, ____isWaitingForData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CloudSessionsDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CloudSessionsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataController*, "VROSC", "CloudSessionsDataController");
NEED_NO_BOX(::VROSC::CloudSessionsDataController___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataController___c*, "VROSC", "CloudSessionsDataController/<>c");
NEED_NO_BOX(::VROSC::CloudSessionsDataController___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataController___c__DisplayClass4_0*, "VROSC", "CloudSessionsDataController/<>c__DisplayClass4_0");
NEED_NO_BOX(::VROSC::CloudSessionsDataController___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataController___c__DisplayClass6_0*, "VROSC", "CloudSessionsDataController/<>c__DisplayClass6_0");
NEED_NO_BOX(::VROSC::CloudSessionsDataController___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataController___c__DisplayClass7_0*, "VROSC", "CloudSessionsDataController/<>c__DisplayClass7_0");
