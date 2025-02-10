#pragma once
// IWYU pragma private; include "VROSC/LocalSessionsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__SessionsDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalSessionsDataController)
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
namespace VROSC {
struct Error;
}
namespace VROSC {
class LocalSessionsDataController___c__DisplayClass1_0;
}
namespace VROSC {
class LocalSessionsDataController___c__DisplayClass2_0;
}
namespace VROSC {
class SessionUIData;
}
// Forward declare root types
namespace VROSC {
class LocalSessionsDataController;
}
namespace VROSC {
class LocalSessionsDataController___c__DisplayClass1_0;
}
namespace VROSC {
class LocalSessionsDataController___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LocalSessionsDataController);
MARK_REF_PTR_T(::VROSC::LocalSessionsDataController___c__DisplayClass1_0);
MARK_REF_PTR_T(::VROSC::LocalSessionsDataController___c__DisplayClass2_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LocalSessionsDataController/<>c__DisplayClass1_0
class CORDL_TYPE LocalSessionsDataController___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::LocalSessionsDataController*  __4__this;

/// @brief Field <>9__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::StringW>*  __9__2;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::LocalSessionsDataController___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <LoadLocalData>b__0, addr 0x1858f90, size 0x2e4, virtual false, abstract: false, final false
inline void _LoadLocalData_b__0(::StringW  data) ;

/// @brief Method <LoadLocalData>b__1, addr 0x1859274, size 0x140, virtual false, abstract: false, final false
inline void _LoadLocalData_b__1(::VROSC::Error  error) ;

/// @brief Method <LoadLocalData>b__2, addr 0x18593f4, size 0x5c, virtual false, abstract: false, final false
inline void _LoadLocalData_b__2(::StringW  data) ;

constexpr ::VROSC::LocalSessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::LocalSessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::LocalSessionsDataController*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1858148, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSessionsDataController___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataController___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSessionsDataController___c__DisplayClass1_0(LocalSessionsDataController___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataController___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSessionsDataController___c__DisplayClass1_0(LocalSessionsDataController___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{469};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LocalSessionsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LocalSessionsDataController___c__DisplayClass1_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalSessionsDataController___c__DisplayClass1_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalSessionsDataController___c__DisplayClass1_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalSessionsDataController___c__DisplayClass1_0, _____9__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LocalSessionsDataController___c__DisplayClass1_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LocalSessionsDataController/<>c__DisplayClass2_0
class CORDL_TYPE LocalSessionsDataController___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::LocalSessionsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::LocalSessionsDataController___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <SaveLocalData>b__0, addr 0x1859450, size 0x154, virtual false, abstract: false, final false
inline void _SaveLocalData_b__0() ;

constexpr ::VROSC::LocalSessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::LocalSessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::LocalSessionsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x18582e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSessionsDataController___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataController___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSessionsDataController___c__DisplayClass2_0(LocalSessionsDataController___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataController___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSessionsDataController___c__DisplayClass2_0(LocalSessionsDataController___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{470};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LocalSessionsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LocalSessionsDataController___c__DisplayClass2_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalSessionsDataController___c__DisplayClass2_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LocalSessionsDataController___c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SessionsDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LocalSessionsDataController
class CORDL_TYPE LocalSessionsDataController : public ::VROSC::SessionsDataController {
public:
// Declarations
using __c__DisplayClass1_0 = ::VROSC::LocalSessionsDataController___c__DisplayClass1_0;

using __c__DisplayClass2_0 = ::VROSC::LocalSessionsDataController___c__DisplayClass2_0;

/// @brief Method AddOldSession, addr 0x18584a0, size 0xd4, virtual false, abstract: false, final false
inline void AddOldSession(::StringW  sessionId, int32_t  version, ::StringW  date, int32_t  trackCount, bool  hasPreview) ;

/// @brief Method CommitTempSession, addr 0x1858d44, size 0xf0, virtual false, abstract: false, final false
inline void CommitTempSession() ;

/// @brief Method GenerateNewSessionId, addr 0x1858e34, size 0x15c, virtual true, abstract: false, final false
inline ::StringW GenerateNewSessionId() ;

/// @brief Method GetSessionUIData, addr 0x1858be0, size 0x164, virtual true, abstract: false, final false
inline ::VROSC::SessionUIData* GetSessionUIData(::StringW  sessionName) ;

/// @brief Method GetSessionsUIData, addr 0x1858670, size 0x264, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetSessionsUIData() ;

/// @brief Method LoadLocalData, addr 0x1857fec, size 0x15c, virtual true, abstract: false, final false
inline void LoadLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::LocalSessionsDataController* New_ctor() ;

/// @brief Method RemoveOldSession, addr 0x18582e8, size 0x80, virtual false, abstract: false, final false
inline void RemoveOldSession(::StringW  sessionId) ;

/// @brief Method RemoveSession, addr 0x18583d0, size 0xd0, virtual true, abstract: false, final false
inline void RemoveSession(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveLocalData, addr 0x1858150, size 0x190, virtual true, abstract: false, final false
inline void SaveLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method .ctor, addr 0x1857ea4, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSessionsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSessionsDataController(LocalSessionsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSessionsDataController(LocalSessionsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LocalSessionsDataController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LocalSessionsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocalSessionsDataController*, "VROSC", "LocalSessionsDataController");
NEED_NO_BOX(::VROSC::LocalSessionsDataController___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocalSessionsDataController___c__DisplayClass1_0*, "VROSC", "LocalSessionsDataController/<>c__DisplayClass1_0");
NEED_NO_BOX(::VROSC::LocalSessionsDataController___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocalSessionsDataController___c__DisplayClass2_0*, "VROSC", "LocalSessionsDataController/<>c__DisplayClass2_0");
