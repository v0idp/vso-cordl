#pragma once
// IWYU pragma private; include "VROSC/AppValidityChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppValidityChecker)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC {
class AppValidityChecker_ForceUpdates;
}
namespace VROSC {
struct AppValidityChecker__ForceUpdatesDataLoadFailure_d__19;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class AppValidityChecker;
}
namespace VROSC {
class AppValidityChecker_ForceUpdates;
}
namespace VROSC {
struct AppValidityChecker__ForceUpdatesDataLoadFailure_d__19;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AppValidityChecker);
MARK_REF_PTR_T(::VROSC::AppValidityChecker_ForceUpdates);
MARK_VAL_T(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AppValidityChecker/ForceUpdates
class CORDL_TYPE AppValidityChecker_ForceUpdates : public ::System::Object {
public:
// Declarations
/// @brief Field EULATermsVersion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_EULATermsVersion, put=__cordl_internal_set_EULATermsVersion)) ::StringW  EULATermsVersion;

/// @brief Field MinVersionForApp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinVersionForApp, put=__cordl_internal_set_MinVersionForApp)) ::StringW  MinVersionForApp;

/// @brief Field MinVersionForLibrary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinVersionForLibrary, put=__cordl_internal_set_MinVersionForLibrary)) ::StringW  MinVersionForLibrary;

static inline ::VROSC::AppValidityChecker_ForceUpdates* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_EULATermsVersion() const;

constexpr ::StringW& __cordl_internal_get_EULATermsVersion() ;

constexpr ::StringW const& __cordl_internal_get_MinVersionForApp() const;

constexpr ::StringW& __cordl_internal_get_MinVersionForApp() ;

constexpr ::StringW const& __cordl_internal_get_MinVersionForLibrary() const;

constexpr ::StringW& __cordl_internal_get_MinVersionForLibrary() ;

constexpr void __cordl_internal_set_EULATermsVersion(::StringW  value) ;

constexpr void __cordl_internal_set_MinVersionForApp(::StringW  value) ;

constexpr void __cordl_internal_set_MinVersionForLibrary(::StringW  value) ;

/// @brief Method .ctor, addr 0x17c7354, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppValidityChecker_ForceUpdates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppValidityChecker_ForceUpdates", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppValidityChecker_ForceUpdates(AppValidityChecker_ForceUpdates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppValidityChecker_ForceUpdates", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppValidityChecker_ForceUpdates(AppValidityChecker_ForceUpdates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{278};

/// @brief Field EULATermsVersion, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___EULATermsVersion;

/// @brief Field MinVersionForApp, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MinVersionForApp;

/// @brief Field MinVersionForLibrary, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MinVersionForLibrary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AppValidityChecker_ForceUpdates, ___EULATermsVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker_ForceUpdates, ___MinVersionForApp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker_ForceUpdates, ___MinVersionForLibrary) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AppValidityChecker_ForceUpdates, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, VROSC.Error
namespace VROSC {
// Is value type: true
// CS Name: VROSC.AppValidityChecker/<ForceUpdatesDataLoadFailure>d__19
struct CORDL_TYPE AppValidityChecker__ForceUpdatesDataLoadFailure_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17c798c, size 0x2c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17c7c54, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AppValidityChecker__ForceUpdatesDataLoadFailure_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "error", ty: "::VROSC::Error", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::AppValidityChecker*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr AppValidityChecker__ForceUpdatesDataLoadFailure_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::Error  error, ::VROSC::AppValidityChecker*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field error, offset: 0x28, size: 0x4, def value: None
 ::VROSC::Error  error;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AppValidityChecker*  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AppValidityChecker
class CORDL_TYPE AppValidityChecker : public ::System::Object {
public:
// Declarations
using ForceUpdates = ::VROSC::AppValidityChecker_ForceUpdates;

using _ForceUpdatesDataLoadFailure_d__19 = ::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19;

 __declspec(property(get=get_EULATermsVersion)) ::StringW  EULATermsVersion;

 __declspec(property(get=get_IsForceUpdateDataLoaded, put=set_IsForceUpdateDataLoaded)) bool  IsForceUpdateDataLoaded;

/// @brief Field <IsForceUpdateDataLoaded>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsForceUpdateDataLoaded_k__BackingField, put=__cordl_internal_set__IsForceUpdateDataLoaded_k__BackingField)) bool  _IsForceUpdateDataLoaded_k__BackingField;

/// @brief Field _forceUpdatesData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__forceUpdatesData, put=__cordl_internal_set__forceUpdatesData)) ::VROSC::AppValidityChecker_ForceUpdates*  _forceUpdatesData;

/// @brief Field _isDataLoadAttempted, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDataLoadAttempted, put=__cordl_internal_set__isDataLoadAttempted)) bool  _isDataLoadAttempted;

/// @brief Field _onFailureCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onFailureCallback, put=setStaticF__onFailureCallback)) ::System::Action_1<::VROSC::Error>*  _onFailureCallback;

/// @brief Field _onSuccessCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSuccessCallback, put=setStaticF__onSuccessCallback)) ::System::Action*  _onSuccessCallback;

/// @brief Field _retries, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__retries, put=__cordl_internal_set__retries)) int32_t  _retries;

/// @brief Method CanUserUseLibrary, addr 0x17c77bc, size 0x88, virtual false, abstract: false, final false
inline bool CanUserUseLibrary() ;

/// @brief Method ForceUpdatesDataLoadFailure, addr 0x17c78f0, size 0x9c, virtual false, abstract: false, final false
inline void ForceUpdatesDataLoadFailure(::VROSC::Error  error) ;

/// @brief Method ForceUpdatesDataLoadSuccess, addr 0x17c7844, size 0xac, virtual false, abstract: false, final false
inline void ForceUpdatesDataLoadSuccess(::StringW  jsonData) ;

/// @brief Method HasUserAcceptedTerms, addr 0x17c74e8, size 0x90, virtual false, abstract: false, final false
inline bool HasUserAcceptedTerms() ;

/// @brief Method IsAppValid, addr 0x17c72bc, size 0x8, virtual false, abstract: false, final false
inline bool IsAppValid() ;

/// @brief Method IsVersionCompatible, addr 0x17c7578, size 0x244, virtual false, abstract: false, final false
inline bool IsVersionCompatible(::StringW  requiredVersion, ::StringW  versionToCheck) ;

/// @brief Method LoadData, addr 0x17c73a8, size 0x140, virtual false, abstract: false, final false
inline void LoadData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::AppValidityChecker* New_ctor() ;

constexpr bool const& __cordl_internal_get__IsForceUpdateDataLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsForceUpdateDataLoaded_k__BackingField() ;

constexpr ::VROSC::AppValidityChecker_ForceUpdates* const& __cordl_internal_get__forceUpdatesData() const;

constexpr ::VROSC::AppValidityChecker_ForceUpdates*& __cordl_internal_get__forceUpdatesData() ;

constexpr bool const& __cordl_internal_get__isDataLoadAttempted() const;

constexpr bool& __cordl_internal_get__isDataLoadAttempted() ;

constexpr int32_t const& __cordl_internal_get__retries() const;

constexpr int32_t& __cordl_internal_get__retries() ;

constexpr void __cordl_internal_set__IsForceUpdateDataLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__forceUpdatesData(::VROSC::AppValidityChecker_ForceUpdates*  value) ;

constexpr void __cordl_internal_set__isDataLoadAttempted(bool  value) ;

constexpr void __cordl_internal_set__retries(int32_t  value) ;

/// @brief Method .ctor, addr 0x17c72f4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF__onFailureCallback() ;

static inline ::System::Action* getStaticF__onSuccessCallback() ;

/// @brief Method get_EULATermsVersion, addr 0x17c72c4, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_EULATermsVersion() ;

/// @brief Method get_IsForceUpdateDataLoaded, addr 0x17c72e0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsForceUpdateDataLoaded() ;

static inline void setStaticF__onFailureCallback(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF__onSuccessCallback(::System::Action*  value) ;

/// @brief Method set_IsForceUpdateDataLoaded, addr 0x17c72e8, size 0xc, virtual false, abstract: false, final false
inline void set_IsForceUpdateDataLoaded(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppValidityChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppValidityChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppValidityChecker(AppValidityChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppValidityChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppValidityChecker(AppValidityChecker const& ) = delete;

/// @brief Field TimeoutRetries offset 0xffffffff size 0x4
static constexpr int32_t  TimeoutRetries{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{280};

/// @brief Field _forceUpdatesData, offset: 0x10, size: 0x8, def value: None
 ::VROSC::AppValidityChecker_ForceUpdates*  ____forceUpdatesData;

/// @brief Field _isDataLoadAttempted, offset: 0x18, size: 0x1, def value: None
 bool  ____isDataLoadAttempted;

/// @brief Field _retries, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____retries;

/// @brief Field <IsForceUpdateDataLoaded>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsForceUpdateDataLoaded_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AppValidityChecker, ____forceUpdatesData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker, ____isDataLoadAttempted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker, ____retries) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppValidityChecker, ____IsForceUpdateDataLoaded_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AppValidityChecker, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AppValidityChecker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppValidityChecker*, "VROSC", "AppValidityChecker");
NEED_NO_BOX(::VROSC::AppValidityChecker_ForceUpdates);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppValidityChecker_ForceUpdates*, "VROSC", "AppValidityChecker/ForceUpdates");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppValidityChecker__ForceUpdatesDataLoadFailure_d__19, "VROSC", "AppValidityChecker/<ForceUpdatesDataLoadFailure>d__19");
