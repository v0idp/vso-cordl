#pragma once
// IWYU pragma private; include "VROSC/UserDataControllers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataControllers)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
class BrowserDataController;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InstrumentDataController;
}
namespace VROSC {
class LoopStationDataController;
}
namespace VROSC {
class MicrophoneDataController;
}
namespace VROSC {
class ModularDrumsDataController;
}
namespace VROSC {
class SaveLoadManager;
}
namespace VROSC {
class SessionSettingsDataController;
}
namespace VROSC {
class SessionsManager;
}
namespace VROSC {
class SynthsDataController;
}
namespace VROSC {
class TapeRecorderDataController;
}
namespace VROSC {
struct UserDataControllers__LoadControllers_d__73;
}
namespace VROSC {
class UserDataControllers__MonitorPreviewGeneratingProgress_d__74;
}
namespace VROSC {
class UserDataControllers__MonitorPreviewSavingProgress_d__75;
}
namespace VROSC {
struct UserDataControllers__SaveControllers_d__76;
}
namespace VROSC {
class UserDataControllers___c;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass70_0;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass73_0;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass73_1;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass76_0;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass76_1;
}
namespace VROSC {
class UserFavoritesDataController;
}
namespace VROSC {
class UserPreferencesDataController;
}
namespace VROSC {
class UserProfileDataController;
}
namespace VROSC {
class UserUpVotesDataController;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
class UserDataControllers__MonitorPreviewGeneratingProgress_d__74;
}
namespace VROSC {
class UserDataControllers__MonitorPreviewSavingProgress_d__75;
}
namespace VROSC {
class UserDataControllers___c;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass70_0;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass73_0;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass73_1;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass76_0;
}
namespace VROSC {
class UserDataControllers___c__DisplayClass76_1;
}
namespace VROSC {
struct UserDataControllers__LoadControllers_d__73;
}
namespace VROSC {
struct UserDataControllers__SaveControllers_d__76;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserDataControllers);
MARK_REF_PTR_T(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74);
MARK_REF_PTR_T(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75);
MARK_REF_PTR_T(::VROSC::UserDataControllers___c);
MARK_REF_PTR_T(::VROSC::UserDataControllers___c__DisplayClass70_0);
MARK_REF_PTR_T(::VROSC::UserDataControllers___c__DisplayClass73_0);
MARK_REF_PTR_T(::VROSC::UserDataControllers___c__DisplayClass73_1);
MARK_REF_PTR_T(::VROSC::UserDataControllers___c__DisplayClass76_0);
MARK_REF_PTR_T(::VROSC::UserDataControllers___c__DisplayClass76_1);
MARK_VAL_T(::VROSC::UserDataControllers__LoadControllers_d__73);
MARK_VAL_T(::VROSC::UserDataControllers__SaveControllers_d__76);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<>c
class CORDL_TYPE UserDataControllers___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::UserDataControllers___c*  __9;

/// @brief Field <>9__71_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_1, put=setStaticF___9__71_1)) ::System::Action_1<::VROSC::Error>*  __9__71_1;

/// @brief Field <>9__71_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_3, put=setStaticF___9__71_3)) ::System::Action_1<::VROSC::Error>*  __9__71_3;

/// @brief Field <>9__71_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_5, put=setStaticF___9__71_5)) ::System::Action_1<::VROSC::Error>*  __9__71_5;

/// @brief Field <>9__76_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__76_1, put=setStaticF___9__76_1)) ::System::Action_1<::VROSC::Error>*  __9__76_1;

/// @brief Field <>9__76_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__76_4, put=setStaticF___9__76_4)) ::System::Action_1<::VROSC::Error>*  __9__76_4;

static inline ::VROSC::UserDataControllers___c* New_ctor() ;

/// @brief Method <LoadCloudData>b__71_1, addr 0x187f82c, size 0x4, virtual false, abstract: false, final false
inline void _LoadCloudData_b__71_1(::VROSC::Error  error) ;

/// @brief Method <LoadCloudData>b__71_3, addr 0x187f828, size 0x4, virtual false, abstract: false, final false
inline void _LoadCloudData_b__71_3(::VROSC::Error  error) ;

/// @brief Method <LoadCloudData>b__71_5, addr 0x187f824, size 0x4, virtual false, abstract: false, final false
inline void _LoadCloudData_b__71_5(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__76_1, addr 0x187f830, size 0xcc, virtual false, abstract: false, final false
inline void _SaveControllers_b__76_1(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__76_4, addr 0x187f8fc, size 0xcc, virtual false, abstract: false, final false
inline void _SaveControllers_b__76_4(::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x187f81c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::UserDataControllers___c* getStaticF___9() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__71_1() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__71_3() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__71_5() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__76_1() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__76_4() ;

static inline void setStaticF___9(::VROSC::UserDataControllers___c*  value) ;

static inline void setStaticF___9__71_1(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF___9__71_3(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF___9__71_5(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF___9__76_1(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF___9__76_4(::System::Action_1<::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers___c(UserDataControllers___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers___c(UserDataControllers___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<>c__DisplayClass70_0
class CORDL_TYPE UserDataControllers___c__DisplayClass70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserDataControllers*  __4__this;

/// @brief Field <>9__2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action*  __9__2;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field <>9__4, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action*  __9__4;

/// @brief Field <>9__5, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserDataControllers___c__DisplayClass70_0* New_ctor() ;

/// @brief Method <LoadLocalData>b__0, addr 0x187f9c8, size 0x130, virtual false, abstract: false, final false
inline void _LoadLocalData_b__0() ;

/// @brief Method <LoadLocalData>b__1, addr 0x187fc08, size 0x1b8, virtual false, abstract: false, final false
inline void _LoadLocalData_b__1(::VROSC::Error  error) ;

/// @brief Method <LoadLocalData>b__2, addr 0x187faf8, size 0x3c, virtual false, abstract: false, final false
inline void _LoadLocalData_b__2() ;

/// @brief Method <LoadLocalData>b__3, addr 0x187fb34, size 0xd4, virtual false, abstract: false, final false
inline void _LoadLocalData_b__3(::VROSC::Error  error) ;

/// @brief Method <LoadLocalData>b__4, addr 0x187fdc0, size 0x3c, virtual false, abstract: false, final false
inline void _LoadLocalData_b__4() ;

/// @brief Method <LoadLocalData>b__5, addr 0x187fdfc, size 0xd4, virtual false, abstract: false, final false
inline void _LoadLocalData_b__5(::VROSC::Error  error2) ;

constexpr ::VROSC::UserDataControllers* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserDataControllers*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserDataControllers*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x187eb90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers___c__DisplayClass70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass70_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers___c__DisplayClass70_0(UserDataControllers___c__DisplayClass70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass70_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers___c__DisplayClass70_0(UserDataControllers___c__DisplayClass70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{578};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field <>9__2, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  _____9__2;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

/// @brief Field <>9__4, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__4;

/// @brief Field <>9__5, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass70_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass70_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass70_0, _____9__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass70_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass70_0, _____9__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass70_0, _____9__5) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers___c__DisplayClass70_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<>c__DisplayClass73_0
class CORDL_TYPE UserDataControllers___c__DisplayClass73_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserDataControllers*  __4__this;

/// @brief Field onFailure, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

static inline ::VROSC::UserDataControllers___c__DisplayClass73_0* New_ctor() ;

/// @brief Method <LoadControllers>b__0, addr 0x187fed8, size 0x18, virtual false, abstract: false, final false
inline void _LoadControllers_b__0() ;

/// @brief Method <LoadControllers>b__1, addr 0x187fef0, size 0x1c, virtual false, abstract: false, final false
inline void _LoadControllers_b__1(::VROSC::Error  error) ;

/// @brief Method <LoadControllers>b__10, addr 0x188064c, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__10() ;

/// @brief Method <LoadControllers>b__11, addr 0x1880718, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__11(::VROSC::Error  error) ;

/// @brief Method <LoadControllers>b__12, addr 0x18807e4, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__12() ;

/// @brief Method <LoadControllers>b__13, addr 0x18808b0, size 0x104, virtual false, abstract: false, final false
inline void _LoadControllers_b__13(::VROSC::Error  error) ;

/// @brief Method <LoadControllers>b__2, addr 0x187ff0c, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__2() ;

/// @brief Method <LoadControllers>b__3, addr 0x187ffd8, size 0x104, virtual false, abstract: false, final false
inline void _LoadControllers_b__3(::VROSC::Error  error) ;

/// @brief Method <LoadControllers>b__4, addr 0x18800dc, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__4() ;

/// @brief Method <LoadControllers>b__5, addr 0x18801a8, size 0x104, virtual false, abstract: false, final false
inline void _LoadControllers_b__5(::VROSC::Error  error) ;

/// @brief Method <LoadControllers>b__6, addr 0x18802ac, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__6() ;

/// @brief Method <LoadControllers>b__7, addr 0x1880378, size 0x104, virtual false, abstract: false, final false
inline void _LoadControllers_b__7(::VROSC::Error  error) ;

/// @brief Method <LoadControllers>b__8, addr 0x188047c, size 0xcc, virtual false, abstract: false, final false
inline void _LoadControllers_b__8() ;

/// @brief Method <LoadControllers>b__9, addr 0x1880548, size 0x104, virtual false, abstract: false, final false
inline void _LoadControllers_b__9(::VROSC::Error  error) ;

constexpr ::VROSC::UserDataControllers* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserDataControllers*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserDataControllers*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x187fed0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers___c__DisplayClass73_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass73_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers___c__DisplayClass73_0(UserDataControllers___c__DisplayClass73_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass73_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers___c__DisplayClass73_0(UserDataControllers___c__DisplayClass73_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{579};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  _____4__this;

/// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass73_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass73_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers___c__DisplayClass73_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<>c__DisplayClass73_1
class CORDL_TYPE UserDataControllers___c__DisplayClass73_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::UserDataControllers___c__DisplayClass73_0*  CS$__8__locals1;

/// @brief Field instrumentDataController, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_instrumentDataController, put=__cordl_internal_set_instrumentDataController)) ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>  instrumentDataController;

static inline ::VROSC::UserDataControllers___c__DisplayClass73_1* New_ctor() ;

/// @brief Method <LoadControllers>b__14, addr 0x18809bc, size 0xdc, virtual false, abstract: false, final false
inline void _LoadControllers_b__14() ;

/// @brief Method <LoadControllers>b__15, addr 0x1880a98, size 0x1b4, virtual false, abstract: false, final false
inline void _LoadControllers_b__15(::VROSC::Error  error) ;

constexpr ::VROSC::UserDataControllers___c__DisplayClass73_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::UserDataControllers___c__DisplayClass73_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*> const& __cordl_internal_get_instrumentDataController() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>& __cordl_internal_get_instrumentDataController() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::UserDataControllers___c__DisplayClass73_0*  value) ;

constexpr void __cordl_internal_set_instrumentDataController(::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>  value) ;

/// @brief Method .ctor, addr 0x18809b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers___c__DisplayClass73_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass73_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers___c__DisplayClass73_1(UserDataControllers___c__DisplayClass73_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass73_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers___c__DisplayClass73_1(UserDataControllers___c__DisplayClass73_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{580};

/// @brief Field instrumentDataController, offset: 0x10, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>  ___instrumentDataController;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UserDataControllers___c__DisplayClass73_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass73_1, ___instrumentDataController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass73_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers___c__DisplayClass73_1, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<>c__DisplayClass76_0
class CORDL_TYPE UserDataControllers___c__DisplayClass76_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserDataControllers*  __4__this;

/// @brief Field <>9__19, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__19, put=__cordl_internal_set___9__19)) ::System::Action_1<::VROSC::Error>*  __9__19;

/// @brief Field <>9__22, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__22, put=__cordl_internal_set___9__22)) ::System::Action*  __9__22;

/// @brief Field <>9__23, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__23, put=__cordl_internal_set___9__23)) ::System::Action_1<::VROSC::Error>*  __9__23;

/// @brief Field <>9__24, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__24, put=__cordl_internal_set___9__24)) ::System::Action*  __9__24;

/// @brief Field <>9__25, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__25, put=__cordl_internal_set___9__25)) ::System::Action_1<::VROSC::Error>*  __9__25;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::UserDataControllers___c__DisplayClass76_0* New_ctor() ;

/// @brief Method <SaveControllers>b__0, addr 0x1880c54, size 0x38, virtual false, abstract: false, final false
inline void _SaveControllers_b__0(bool  hasPreview, float_t  previewMultiplier) ;

/// @brief Method <SaveControllers>b__10, addr 0x1880d64, size 0x18, virtual false, abstract: false, final false
inline void _SaveControllers_b__10() ;

/// @brief Method <SaveControllers>b__11, addr 0x1880d7c, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__11(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__12, addr 0x1880d98, size 0x18, virtual false, abstract: false, final false
inline void _SaveControllers_b__12() ;

/// @brief Method <SaveControllers>b__13, addr 0x1880db0, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__13(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__14, addr 0x1880de8, size 0x108, virtual false, abstract: false, final false
inline void _SaveControllers_b__14() ;

/// @brief Method <SaveControllers>b__15, addr 0x18810c0, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__15(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__16, addr 0x18810dc, size 0x108, virtual false, abstract: false, final false
inline void _SaveControllers_b__16() ;

/// @brief Method <SaveControllers>b__17, addr 0x18813b4, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__17(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__19, addr 0x1880dcc, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__19(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__2, addr 0x1880c8c, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__2(float_t  progress) ;

/// @brief Method <SaveControllers>b__22, addr 0x1880ef0, size 0xcc, virtual false, abstract: false, final false
inline void _SaveControllers_b__22() ;

/// @brief Method <SaveControllers>b__23, addr 0x1880fbc, size 0x104, virtual false, abstract: false, final false
inline void _SaveControllers_b__23(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__24, addr 0x18811e4, size 0xcc, virtual false, abstract: false, final false
inline void _SaveControllers_b__24() ;

/// @brief Method <SaveControllers>b__25, addr 0x18812b0, size 0x104, virtual false, abstract: false, final false
inline void _SaveControllers_b__25(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__3, addr 0x1880ca8, size 0x38, virtual false, abstract: false, final false
inline void _SaveControllers_b__3(bool  hasPreview, float_t  previewMultiplier) ;

/// @brief Method <SaveControllers>b__5, addr 0x1880ce0, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__5(float_t  progress) ;

/// @brief Method <SaveControllers>b__6, addr 0x1880cfc, size 0x18, virtual false, abstract: false, final false
inline void _SaveControllers_b__6() ;

/// @brief Method <SaveControllers>b__7, addr 0x1880d14, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__7(::VROSC::Error  error) ;

/// @brief Method <SaveControllers>b__8, addr 0x1880d30, size 0x18, virtual false, abstract: false, final false
inline void _SaveControllers_b__8() ;

/// @brief Method <SaveControllers>b__9, addr 0x1880d48, size 0x1c, virtual false, abstract: false, final false
inline void _SaveControllers_b__9(::VROSC::Error  error) ;

constexpr ::VROSC::UserDataControllers* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserDataControllers*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__19() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__19() ;

constexpr ::System::Action* const& __cordl_internal_get___9__22() const;

constexpr ::System::Action*& __cordl_internal_get___9__22() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__23() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__23() ;

constexpr ::System::Action* const& __cordl_internal_get___9__24() const;

constexpr ::System::Action*& __cordl_internal_get___9__24() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__25() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__25() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserDataControllers*  value) ;

constexpr void __cordl_internal_set___9__19(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__22(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__23(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__24(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__25(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1880c4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers___c__DisplayClass76_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass76_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers___c__DisplayClass76_0(UserDataControllers___c__DisplayClass76_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass76_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers___c__DisplayClass76_0(UserDataControllers___c__DisplayClass76_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{581};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__19, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__19;

/// @brief Field <>9__22, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__22;

/// @brief Field <>9__23, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__23;

/// @brief Field <>9__24, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  _____9__24;

/// @brief Field <>9__25, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__25;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, _____9__19) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, _____9__22) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, _____9__23) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, _____9__24) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_0, _____9__25) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers___c__DisplayClass76_0, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<>c__DisplayClass76_1
class CORDL_TYPE UserDataControllers___c__DisplayClass76_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::UserDataControllers___c__DisplayClass76_0*  CS$__8__locals1;

/// @brief Field <>9__20, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__20, put=__cordl_internal_set___9__20)) ::System::Action*  __9__20;

/// @brief Field <>9__21, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__21, put=__cordl_internal_set___9__21)) ::System::Action_1<::VROSC::Error>*  __9__21;

/// @brief Field instrumentDataController, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_instrumentDataController, put=__cordl_internal_set_instrumentDataController)) ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>  instrumentDataController;

static inline ::VROSC::UserDataControllers___c__DisplayClass76_1* New_ctor() ;

/// @brief Method <SaveControllers>b__18, addr 0x18813d8, size 0x114, virtual false, abstract: false, final false
inline void _SaveControllers_b__18() ;

/// @brief Method <SaveControllers>b__20, addr 0x18814ec, size 0xdc, virtual false, abstract: false, final false
inline void _SaveControllers_b__20() ;

/// @brief Method <SaveControllers>b__21, addr 0x18815c8, size 0x11c, virtual false, abstract: false, final false
inline void _SaveControllers_b__21(::VROSC::Error  error) ;

constexpr ::VROSC::UserDataControllers___c__DisplayClass76_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::UserDataControllers___c__DisplayClass76_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Action* const& __cordl_internal_get___9__20() const;

constexpr ::System::Action*& __cordl_internal_get___9__20() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__21() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__21() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*> const& __cordl_internal_get_instrumentDataController() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>& __cordl_internal_get_instrumentDataController() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::UserDataControllers___c__DisplayClass76_0*  value) ;

constexpr void __cordl_internal_set___9__20(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__21(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_instrumentDataController(::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>  value) ;

/// @brief Method .ctor, addr 0x18813d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers___c__DisplayClass76_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass76_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers___c__DisplayClass76_1(UserDataControllers___c__DisplayClass76_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers___c__DisplayClass76_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers___c__DisplayClass76_1(UserDataControllers___c__DisplayClass76_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{582};

/// @brief Field instrumentDataController, offset: 0x10, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>  ___instrumentDataController;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UserDataControllers___c__DisplayClass76_0*  ___CS$__8__locals1;

/// @brief Field <>9__20, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  _____9__20;

/// @brief Field <>9__21, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__21;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_1, ___instrumentDataController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_1, _____9__20) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers___c__DisplayClass76_1, _____9__21) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers___c__DisplayClass76_1, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.UserDataControllers/<LoadControllers>d__73
struct CORDL_TYPE UserDataControllers__LoadControllers_d__73 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18816e4, size 0x105c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1882740, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers__LoadControllers_d__73() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::UserDataControllers*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "sessionVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr UserDataControllers__LoadControllers_d__73(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::UserDataControllers*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, int32_t  sessionVersion, ::StringW  sessionId, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  __4__this;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field sessionVersion, offset: 0x38, size: 0x4, def value: None
 int32_t  sessionVersion;

/// @brief Field sessionId, offset: 0x40, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, sessionVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, sessionId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__LoadControllers_d__73, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers__LoadControllers_d__73, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<MonitorPreviewGeneratingProgress>d__74
class CORDL_TYPE UserDataControllers__MonitorPreviewGeneratingProgress_d__74 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserDataControllers*  __4__this;

/// @brief Field <previewsProgress>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewsProgress_5__2, put=__cordl_internal_set__previewsProgress_5__2)) float_t  _previewsProgress_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1882750, size 0xd8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1882828, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1882830, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1882868, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x188274c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::UserDataControllers* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserDataControllers*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__previewsProgress_5__2() const;

constexpr float_t& __cordl_internal_get__previewsProgress_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserDataControllers*  value) ;

constexpr void __cordl_internal_set__previewsProgress_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x187f03c, size 0x28, virtual false, abstract: false, final false
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
constexpr UserDataControllers__MonitorPreviewGeneratingProgress_d__74() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers__MonitorPreviewGeneratingProgress_d__74", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers__MonitorPreviewGeneratingProgress_d__74(UserDataControllers__MonitorPreviewGeneratingProgress_d__74 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers__MonitorPreviewGeneratingProgress_d__74", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers__MonitorPreviewGeneratingProgress_d__74(UserDataControllers__MonitorPreviewGeneratingProgress_d__74 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{584};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  _____4__this;

/// @brief Field <previewsProgress>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____previewsProgress_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74, ____previewsProgress_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers/<MonitorPreviewSavingProgress>d__75
class CORDL_TYPE UserDataControllers__MonitorPreviewSavingProgress_d__75 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserDataControllers*  __4__this;

/// @brief Field <previewsProgress>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewsProgress_5__2, put=__cordl_internal_set__previewsProgress_5__2)) float_t  _previewsProgress_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1882874, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1882914, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x188291c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1882954, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1882870, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::UserDataControllers* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserDataControllers*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__previewsProgress_5__2() const;

constexpr float_t& __cordl_internal_get__previewsProgress_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserDataControllers*  value) ;

constexpr void __cordl_internal_set__previewsProgress_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x187f0c4, size 0x28, virtual false, abstract: false, final false
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
constexpr UserDataControllers__MonitorPreviewSavingProgress_d__75() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers__MonitorPreviewSavingProgress_d__75", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers__MonitorPreviewSavingProgress_d__75(UserDataControllers__MonitorPreviewSavingProgress_d__75 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers__MonitorPreviewSavingProgress_d__75", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers__MonitorPreviewSavingProgress_d__75(UserDataControllers__MonitorPreviewSavingProgress_d__75 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{585};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  _____4__this;

/// @brief Field <previewsProgress>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____previewsProgress_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75, ____previewsProgress_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.UserDataControllers/<SaveControllers>d__76
struct CORDL_TYPE UserDataControllers__SaveControllers_d__76 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x188295c, size 0x136c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1883cc8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers__SaveControllers_d__76() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::UserDataControllers*", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::UserDataControllers___c__DisplayClass76_0*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr UserDataControllers__SaveControllers_d__76(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::UserDataControllers*  __4__this, ::StringW  sessionId, ::System::Action_1<::VROSC::Error>*  onFailure, ::VROSC::UserDataControllers___c__DisplayClass76_0*  __8__1, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  __4__this;

/// @brief Field sessionId, offset: 0x30, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::UserDataControllers___c__DisplayClass76_0*  __8__1;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, sessionId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers__SaveControllers_d__76, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers__SaveControllers_d__76, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserDataControllers
class CORDL_TYPE UserDataControllers : public ::System::Object {
public:
// Declarations
using _LoadControllers_d__73 = ::VROSC::UserDataControllers__LoadControllers_d__73;

using _MonitorPreviewGeneratingProgress_d__74 = ::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74;

using _MonitorPreviewSavingProgress_d__75 = ::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75;

using _SaveControllers_d__76 = ::VROSC::UserDataControllers__SaveControllers_d__76;

using __c = ::VROSC::UserDataControllers___c;

using __c__DisplayClass70_0 = ::VROSC::UserDataControllers___c__DisplayClass70_0;

using __c__DisplayClass73_0 = ::VROSC::UserDataControllers___c__DisplayClass73_0;

using __c__DisplayClass73_1 = ::VROSC::UserDataControllers___c__DisplayClass73_1;

using __c__DisplayClass76_0 = ::VROSC::UserDataControllers___c__DisplayClass76_0;

using __c__DisplayClass76_1 = ::VROSC::UserDataControllers___c__DisplayClass76_1;

 __declspec(property(get=get_BrowserDataController, put=set_BrowserDataController)) ::VROSC::BrowserDataController*  BrowserDataController;

 __declspec(property(get=get_IsCloudDataLoaded, put=set_IsCloudDataLoaded)) bool  IsCloudDataLoaded;

 __declspec(property(get=get_IsLocalDataLoaded, put=set_IsLocalDataLoaded)) bool  IsLocalDataLoaded;

 __declspec(property(get=get_LoopStationDataController, put=set_LoopStationDataController)) ::VROSC::LoopStationDataController*  LoopStationDataController;

 __declspec(property(get=get_MicrophoneDataController, put=set_MicrophoneDataController)) ::VROSC::MicrophoneDataController*  MicrophoneDataController;

 __declspec(property(get=get_ModularDrumsDataController, put=set_ModularDrumsDataController)) ::VROSC::ModularDrumsDataController*  ModularDrumsDataController;

/// @brief Field OnControllersDataLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnControllersDataLoaded, put=setStaticF_OnControllersDataLoaded)) ::System::Action_1<::VROSC::UserDataControllers*>*  OnControllersDataLoaded;

/// @brief Field OnDataLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDataLoaded, put=setStaticF_OnDataLoaded)) ::System::Action_1<::VROSC::UserDataControllers*>*  OnDataLoaded;

/// @brief Field OnPreferencesDataLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPreferencesDataLoaded, put=setStaticF_OnPreferencesDataLoaded)) ::System::Action_1<::VROSC::UserDataControllers*>*  OnPreferencesDataLoaded;

/// @brief Field OnSaveLoadSessionProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveLoadSessionProgress, put=setStaticF_OnSaveLoadSessionProgress)) ::System::Action_2<::StringW,float_t>*  OnSaveLoadSessionProgress;

/// @brief Field OnSaveSessionPreviewProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveSessionPreviewProgress, put=setStaticF_OnSaveSessionPreviewProgress)) ::System::Action_3<::StringW,bool,float_t>*  OnSaveSessionPreviewProgress;

 __declspec(property(get=get_SessionSettingsDataController, put=set_SessionSettingsDataController)) ::VROSC::SessionSettingsDataController*  SessionSettingsDataController;

 __declspec(property(get=get_SessionsManager, put=set_SessionsManager)) ::VROSC::SessionsManager*  SessionsManager;

 __declspec(property(get=get_SynthsDataController, put=set_SynthsDataController)) ::VROSC::SynthsDataController*  SynthsDataController;

 __declspec(property(get=get_TapeRecorderDataController, put=set_TapeRecorderDataController)) ::VROSC::TapeRecorderDataController*  TapeRecorderDataController;

 __declspec(property(get=get_UserFavoritesDataController, put=set_UserFavoritesDataController)) ::VROSC::UserFavoritesDataController*  UserFavoritesDataController;

 __declspec(property(get=get_UserPreferencesDataController, put=set_UserPreferencesDataController)) ::VROSC::UserPreferencesDataController*  UserPreferencesDataController;

 __declspec(property(get=get_UserProfileDataController, put=set_UserProfileDataController)) ::VROSC::UserProfileDataController*  UserProfileDataController;

 __declspec(property(get=get_UserUpVotesDataController, put=set_UserUpVotesDataController)) ::VROSC::UserUpVotesDataController*  UserUpVotesDataController;

/// @brief Field <BrowserDataController>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__BrowserDataController_k__BackingField, put=__cordl_internal_set__BrowserDataController_k__BackingField)) ::VROSC::BrowserDataController*  _BrowserDataController_k__BackingField;

/// @brief Field <IsCloudDataLoaded>k__BackingField, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCloudDataLoaded_k__BackingField, put=__cordl_internal_set__IsCloudDataLoaded_k__BackingField)) bool  _IsCloudDataLoaded_k__BackingField;

/// @brief Field <IsLocalDataLoaded>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLocalDataLoaded_k__BackingField, put=__cordl_internal_set__IsLocalDataLoaded_k__BackingField)) bool  _IsLocalDataLoaded_k__BackingField;

/// @brief Field <LoopStationDataController>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopStationDataController_k__BackingField, put=__cordl_internal_set__LoopStationDataController_k__BackingField)) ::VROSC::LoopStationDataController*  _LoopStationDataController_k__BackingField;

/// @brief Field <MicrophoneDataController>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__MicrophoneDataController_k__BackingField, put=__cordl_internal_set__MicrophoneDataController_k__BackingField)) ::VROSC::MicrophoneDataController*  _MicrophoneDataController_k__BackingField;

/// @brief Field <ModularDrumsDataController>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ModularDrumsDataController_k__BackingField, put=__cordl_internal_set__ModularDrumsDataController_k__BackingField)) ::VROSC::ModularDrumsDataController*  _ModularDrumsDataController_k__BackingField;

/// @brief Field <SessionSettingsDataController>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionSettingsDataController_k__BackingField, put=__cordl_internal_set__SessionSettingsDataController_k__BackingField)) ::VROSC::SessionSettingsDataController*  _SessionSettingsDataController_k__BackingField;

/// @brief Field <SessionsManager>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionsManager_k__BackingField, put=__cordl_internal_set__SessionsManager_k__BackingField)) ::VROSC::SessionsManager*  _SessionsManager_k__BackingField;

/// @brief Field <SynthsDataController>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__SynthsDataController_k__BackingField, put=__cordl_internal_set__SynthsDataController_k__BackingField)) ::VROSC::SynthsDataController*  _SynthsDataController_k__BackingField;

/// @brief Field <TapeRecorderDataController>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__TapeRecorderDataController_k__BackingField, put=__cordl_internal_set__TapeRecorderDataController_k__BackingField)) ::VROSC::TapeRecorderDataController*  _TapeRecorderDataController_k__BackingField;

/// @brief Field <UserFavoritesDataController>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserFavoritesDataController_k__BackingField, put=__cordl_internal_set__UserFavoritesDataController_k__BackingField)) ::VROSC::UserFavoritesDataController*  _UserFavoritesDataController_k__BackingField;

/// @brief Field <UserPreferencesDataController>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserPreferencesDataController_k__BackingField, put=__cordl_internal_set__UserPreferencesDataController_k__BackingField)) ::VROSC::UserPreferencesDataController*  _UserPreferencesDataController_k__BackingField;

/// @brief Field <UserProfileDataController>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserProfileDataController_k__BackingField, put=__cordl_internal_set__UserProfileDataController_k__BackingField)) ::VROSC::UserProfileDataController*  _UserProfileDataController_k__BackingField;

/// @brief Field <UserUpVotesDataController>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserUpVotesDataController_k__BackingField, put=__cordl_internal_set__UserUpVotesDataController_k__BackingField)) ::VROSC::UserUpVotesDataController*  _UserUpVotesDataController_k__BackingField;

/// @brief Field _instrumentsDataControllers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentsDataControllers, put=__cordl_internal_set__instrumentsDataControllers)) ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>*  _instrumentsDataControllers;

/// @brief Field _loadSaveSessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadSaveSessionId, put=__cordl_internal_set__loadSaveSessionId)) ::StringW  _loadSaveSessionId;

/// @brief Field _loadSaveStepsFinished, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__loadSaveStepsFinished, put=__cordl_internal_set__loadSaveStepsFinished)) int32_t  _loadSaveStepsFinished;

/// @brief Field _loadSaveTotalSteps, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__loadSaveTotalSteps, put=__cordl_internal_set__loadSaveTotalSteps)) int32_t  _loadSaveTotalSteps;

/// @brief Field _savingPreviewProgress, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__savingPreviewProgress, put=__cordl_internal_set__savingPreviewProgress)) float_t  _savingPreviewProgress;

/// @brief Method ApplyWidgetsDefaults, addr 0x187eb98, size 0x388, virtual false, abstract: false, final false
inline void ApplyWidgetsDefaults(::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetSettings>>*  widgetsDefaultSettings, bool  sendEvent) ;

/// @brief Method ConvertSynthsData, addr 0x187f2b8, size 0x22c, virtual false, abstract: false, final false
inline void ConvertSynthsData() ;

/// @brief Method GetInstrumentDataController, addr 0x187e39c, size 0x58, virtual false, abstract: false, final false
inline ::VROSC::InstrumentDataController* GetInstrumentDataController(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method Init, addr 0x187e55c, size 0x3e4, virtual false, abstract: false, final false
inline void Init(::VROSC::SaveLoadManager*  saveLoadManager) ;

/// @brief Method LoadCloudData, addr 0x187e944, size 0x138, virtual false, abstract: false, final false
inline void LoadCloudData() ;

/// @brief Method LoadControllers, addr 0x187ef20, size 0xbc, virtual false, abstract: false, final false
inline void LoadControllers(::StringW  sessionId, int32_t  sessionVersion, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadLocalData, addr 0x187ea7c, size 0x114, virtual false, abstract: false, final false
inline void LoadLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method MonitorPreviewGeneratingProgress, addr 0x187efdc, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MonitorPreviewGeneratingProgress() ;

/// @brief Method MonitorPreviewSavingProgress, addr 0x187f064, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MonitorPreviewSavingProgress() ;

static inline ::VROSC::UserDataControllers* New_ctor() ;

/// @brief Method PreviewProgressStepFinished, addr 0x187f224, size 0x94, virtual false, abstract: false, final false
inline void PreviewProgressStepFinished(bool  isSaving, float_t  progress) ;

/// @brief Method ProgressStepFinished, addr 0x187f1a4, size 0x80, virtual false, abstract: false, final false
inline void ProgressStepFinished() ;

/// @brief Method SaveControllers, addr 0x187f0ec, size 0xb8, virtual false, abstract: false, final false
inline void SaveControllers(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method UserLoggedIn, addr 0x187e940, size 0x4, virtual false, abstract: false, final false
inline void UserLoggedIn() ;

/// @brief Method <LoadCloudData>b__71_0, addr 0x187f4e4, size 0x134, virtual false, abstract: false, final false
inline void _LoadCloudData_b__71_0() ;

/// @brief Method <LoadCloudData>b__71_2, addr 0x187f618, size 0x134, virtual false, abstract: false, final false
inline void _LoadCloudData_b__71_2() ;

/// @brief Method <LoadCloudData>b__71_4, addr 0x187f74c, size 0x74, virtual false, abstract: false, final false
inline void _LoadCloudData_b__71_4() ;

constexpr ::VROSC::BrowserDataController* const& __cordl_internal_get__BrowserDataController_k__BackingField() const;

constexpr ::VROSC::BrowserDataController*& __cordl_internal_get__BrowserDataController_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsCloudDataLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCloudDataLoaded_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsLocalDataLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLocalDataLoaded_k__BackingField() ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get__LoopStationDataController_k__BackingField() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get__LoopStationDataController_k__BackingField() ;

constexpr ::VROSC::MicrophoneDataController* const& __cordl_internal_get__MicrophoneDataController_k__BackingField() const;

constexpr ::VROSC::MicrophoneDataController*& __cordl_internal_get__MicrophoneDataController_k__BackingField() ;

constexpr ::VROSC::ModularDrumsDataController* const& __cordl_internal_get__ModularDrumsDataController_k__BackingField() const;

constexpr ::VROSC::ModularDrumsDataController*& __cordl_internal_get__ModularDrumsDataController_k__BackingField() ;

constexpr ::VROSC::SessionSettingsDataController* const& __cordl_internal_get__SessionSettingsDataController_k__BackingField() const;

constexpr ::VROSC::SessionSettingsDataController*& __cordl_internal_get__SessionSettingsDataController_k__BackingField() ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get__SessionsManager_k__BackingField() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get__SessionsManager_k__BackingField() ;

constexpr ::VROSC::SynthsDataController* const& __cordl_internal_get__SynthsDataController_k__BackingField() const;

constexpr ::VROSC::SynthsDataController*& __cordl_internal_get__SynthsDataController_k__BackingField() ;

constexpr ::VROSC::TapeRecorderDataController* const& __cordl_internal_get__TapeRecorderDataController_k__BackingField() const;

constexpr ::VROSC::TapeRecorderDataController*& __cordl_internal_get__TapeRecorderDataController_k__BackingField() ;

constexpr ::VROSC::UserFavoritesDataController* const& __cordl_internal_get__UserFavoritesDataController_k__BackingField() const;

constexpr ::VROSC::UserFavoritesDataController*& __cordl_internal_get__UserFavoritesDataController_k__BackingField() ;

constexpr ::VROSC::UserPreferencesDataController* const& __cordl_internal_get__UserPreferencesDataController_k__BackingField() const;

constexpr ::VROSC::UserPreferencesDataController*& __cordl_internal_get__UserPreferencesDataController_k__BackingField() ;

constexpr ::VROSC::UserProfileDataController* const& __cordl_internal_get__UserProfileDataController_k__BackingField() const;

constexpr ::VROSC::UserProfileDataController*& __cordl_internal_get__UserProfileDataController_k__BackingField() ;

constexpr ::VROSC::UserUpVotesDataController* const& __cordl_internal_get__UserUpVotesDataController_k__BackingField() const;

constexpr ::VROSC::UserUpVotesDataController*& __cordl_internal_get__UserUpVotesDataController_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>* const& __cordl_internal_get__instrumentsDataControllers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>*& __cordl_internal_get__instrumentsDataControllers() ;

constexpr ::StringW const& __cordl_internal_get__loadSaveSessionId() const;

constexpr ::StringW& __cordl_internal_get__loadSaveSessionId() ;

constexpr int32_t const& __cordl_internal_get__loadSaveStepsFinished() const;

constexpr int32_t& __cordl_internal_get__loadSaveStepsFinished() ;

constexpr int32_t const& __cordl_internal_get__loadSaveTotalSteps() const;

constexpr int32_t& __cordl_internal_get__loadSaveTotalSteps() ;

constexpr float_t const& __cordl_internal_get__savingPreviewProgress() const;

constexpr float_t& __cordl_internal_get__savingPreviewProgress() ;

constexpr void __cordl_internal_set__BrowserDataController_k__BackingField(::VROSC::BrowserDataController*  value) ;

constexpr void __cordl_internal_set__IsCloudDataLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsLocalDataLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LoopStationDataController_k__BackingField(::VROSC::LoopStationDataController*  value) ;

constexpr void __cordl_internal_set__MicrophoneDataController_k__BackingField(::VROSC::MicrophoneDataController*  value) ;

constexpr void __cordl_internal_set__ModularDrumsDataController_k__BackingField(::VROSC::ModularDrumsDataController*  value) ;

constexpr void __cordl_internal_set__SessionSettingsDataController_k__BackingField(::VROSC::SessionSettingsDataController*  value) ;

constexpr void __cordl_internal_set__SessionsManager_k__BackingField(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set__SynthsDataController_k__BackingField(::VROSC::SynthsDataController*  value) ;

constexpr void __cordl_internal_set__TapeRecorderDataController_k__BackingField(::VROSC::TapeRecorderDataController*  value) ;

constexpr void __cordl_internal_set__UserFavoritesDataController_k__BackingField(::VROSC::UserFavoritesDataController*  value) ;

constexpr void __cordl_internal_set__UserPreferencesDataController_k__BackingField(::VROSC::UserPreferencesDataController*  value) ;

constexpr void __cordl_internal_set__UserProfileDataController_k__BackingField(::VROSC::UserProfileDataController*  value) ;

constexpr void __cordl_internal_set__UserUpVotesDataController_k__BackingField(::VROSC::UserUpVotesDataController*  value) ;

constexpr void __cordl_internal_set__instrumentsDataControllers(::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>*  value) ;

constexpr void __cordl_internal_set__loadSaveSessionId(::StringW  value) ;

constexpr void __cordl_internal_set__loadSaveStepsFinished(int32_t  value) ;

constexpr void __cordl_internal_set__loadSaveTotalSteps(int32_t  value) ;

constexpr void __cordl_internal_set__savingPreviewProgress(float_t  value) ;

/// @brief Method .ctor, addr 0x187e3f4, size 0x168, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::UserDataControllers*>* getStaticF_OnControllersDataLoaded() ;

static inline ::System::Action_1<::VROSC::UserDataControllers*>* getStaticF_OnDataLoaded() ;

static inline ::System::Action_1<::VROSC::UserDataControllers*>* getStaticF_OnPreferencesDataLoaded() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnSaveLoadSessionProgress() ;

static inline ::System::Action_3<::StringW,bool,float_t>* getStaticF_OnSaveSessionPreviewProgress() ;

/// @brief Method get_BrowserDataController, addr 0x187e34c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::BrowserDataController* get_BrowserDataController() ;

/// @brief Method get_IsCloudDataLoaded, addr 0x187e2c8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCloudDataLoaded() ;

/// @brief Method get_IsLocalDataLoaded, addr 0x187e2b4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLocalDataLoaded() ;

/// @brief Method get_LoopStationDataController, addr 0x187e32c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopStationDataController* get_LoopStationDataController() ;

/// @brief Method get_MicrophoneDataController, addr 0x187e38c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MicrophoneDataController* get_MicrophoneDataController() ;

/// @brief Method get_ModularDrumsDataController, addr 0x187e37c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::ModularDrumsDataController* get_ModularDrumsDataController() ;

/// @brief Method get_SessionSettingsDataController, addr 0x187e35c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SessionSettingsDataController* get_SessionSettingsDataController() ;

/// @brief Method get_SessionsManager, addr 0x187e2dc, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SessionsManager* get_SessionsManager() ;

/// @brief Method get_SynthsDataController, addr 0x187e36c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SynthsDataController* get_SynthsDataController() ;

/// @brief Method get_TapeRecorderDataController, addr 0x187e33c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TapeRecorderDataController* get_TapeRecorderDataController() ;

/// @brief Method get_UserFavoritesDataController, addr 0x187e30c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UserFavoritesDataController* get_UserFavoritesDataController() ;

/// @brief Method get_UserPreferencesDataController, addr 0x187e2fc, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UserPreferencesDataController* get_UserPreferencesDataController() ;

/// @brief Method get_UserProfileDataController, addr 0x187e2ec, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UserProfileDataController* get_UserProfileDataController() ;

/// @brief Method get_UserUpVotesDataController, addr 0x187e31c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UserUpVotesDataController* get_UserUpVotesDataController() ;

static inline void setStaticF_OnControllersDataLoaded(::System::Action_1<::VROSC::UserDataControllers*>*  value) ;

static inline void setStaticF_OnDataLoaded(::System::Action_1<::VROSC::UserDataControllers*>*  value) ;

static inline void setStaticF_OnPreferencesDataLoaded(::System::Action_1<::VROSC::UserDataControllers*>*  value) ;

static inline void setStaticF_OnSaveLoadSessionProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnSaveSessionPreviewProgress(::System::Action_3<::StringW,bool,float_t>*  value) ;

/// @brief Method set_BrowserDataController, addr 0x187e354, size 0x8, virtual false, abstract: false, final false
inline void set_BrowserDataController(::VROSC::BrowserDataController*  value) ;

/// @brief Method set_IsCloudDataLoaded, addr 0x187e2d0, size 0xc, virtual false, abstract: false, final false
inline void set_IsCloudDataLoaded(bool  value) ;

/// @brief Method set_IsLocalDataLoaded, addr 0x187e2bc, size 0xc, virtual false, abstract: false, final false
inline void set_IsLocalDataLoaded(bool  value) ;

/// @brief Method set_LoopStationDataController, addr 0x187e334, size 0x8, virtual false, abstract: false, final false
inline void set_LoopStationDataController(::VROSC::LoopStationDataController*  value) ;

/// @brief Method set_MicrophoneDataController, addr 0x187e394, size 0x8, virtual false, abstract: false, final false
inline void set_MicrophoneDataController(::VROSC::MicrophoneDataController*  value) ;

/// @brief Method set_ModularDrumsDataController, addr 0x187e384, size 0x8, virtual false, abstract: false, final false
inline void set_ModularDrumsDataController(::VROSC::ModularDrumsDataController*  value) ;

/// @brief Method set_SessionSettingsDataController, addr 0x187e364, size 0x8, virtual false, abstract: false, final false
inline void set_SessionSettingsDataController(::VROSC::SessionSettingsDataController*  value) ;

/// @brief Method set_SessionsManager, addr 0x187e2e4, size 0x8, virtual false, abstract: false, final false
inline void set_SessionsManager(::VROSC::SessionsManager*  value) ;

/// @brief Method set_SynthsDataController, addr 0x187e374, size 0x8, virtual false, abstract: false, final false
inline void set_SynthsDataController(::VROSC::SynthsDataController*  value) ;

/// @brief Method set_TapeRecorderDataController, addr 0x187e344, size 0x8, virtual false, abstract: false, final false
inline void set_TapeRecorderDataController(::VROSC::TapeRecorderDataController*  value) ;

/// @brief Method set_UserFavoritesDataController, addr 0x187e314, size 0x8, virtual false, abstract: false, final false
inline void set_UserFavoritesDataController(::VROSC::UserFavoritesDataController*  value) ;

/// @brief Method set_UserPreferencesDataController, addr 0x187e304, size 0x8, virtual false, abstract: false, final false
inline void set_UserPreferencesDataController(::VROSC::UserPreferencesDataController*  value) ;

/// @brief Method set_UserProfileDataController, addr 0x187e2f4, size 0x8, virtual false, abstract: false, final false
inline void set_UserProfileDataController(::VROSC::UserProfileDataController*  value) ;

/// @brief Method set_UserUpVotesDataController, addr 0x187e324, size 0x8, virtual false, abstract: false, final false
inline void set_UserUpVotesDataController(::VROSC::UserUpVotesDataController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataControllers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataControllers(UserDataControllers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataControllers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataControllers(UserDataControllers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{587};

/// @brief Field _loadSaveStepsFinished, offset: 0x10, size: 0x4, def value: None
 int32_t  ____loadSaveStepsFinished;

/// @brief Field _loadSaveTotalSteps, offset: 0x14, size: 0x4, def value: None
 int32_t  ____loadSaveTotalSteps;

/// @brief Field _loadSaveSessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____loadSaveSessionId;

/// @brief Field _savingPreviewProgress, offset: 0x20, size: 0x4, def value: None
 float_t  ____savingPreviewProgress;

/// @brief Field <IsLocalDataLoaded>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____IsLocalDataLoaded_k__BackingField;

/// @brief Field <IsCloudDataLoaded>k__BackingField, offset: 0x25, size: 0x1, def value: None
 bool  ____IsCloudDataLoaded_k__BackingField;

/// @brief Field <SessionsManager>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SessionsManager*  ____SessionsManager_k__BackingField;

/// @brief Field _instrumentsDataControllers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::VROSC::InstrumentDataController*>*  ____instrumentsDataControllers;

/// @brief Field <UserProfileDataController>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::VROSC::UserProfileDataController*  ____UserProfileDataController_k__BackingField;

/// @brief Field <UserPreferencesDataController>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::VROSC::UserPreferencesDataController*  ____UserPreferencesDataController_k__BackingField;

/// @brief Field <UserFavoritesDataController>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataController*  ____UserFavoritesDataController_k__BackingField;

/// @brief Field <UserUpVotesDataController>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::VROSC::UserUpVotesDataController*  ____UserUpVotesDataController_k__BackingField;

/// @brief Field <LoopStationDataController>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  ____LoopStationDataController_k__BackingField;

/// @brief Field <TapeRecorderDataController>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  ____TapeRecorderDataController_k__BackingField;

/// @brief Field <BrowserDataController>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::VROSC::BrowserDataController*  ____BrowserDataController_k__BackingField;

/// @brief Field <SessionSettingsDataController>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::VROSC::SessionSettingsDataController*  ____SessionSettingsDataController_k__BackingField;

/// @brief Field <SynthsDataController>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::VROSC::SynthsDataController*  ____SynthsDataController_k__BackingField;

/// @brief Field <ModularDrumsDataController>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::VROSC::ModularDrumsDataController*  ____ModularDrumsDataController_k__BackingField;

/// @brief Field <MicrophoneDataController>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::VROSC::MicrophoneDataController*  ____MicrophoneDataController_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserDataControllers, ____loadSaveStepsFinished) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____loadSaveTotalSteps) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____loadSaveSessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____savingPreviewProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____IsLocalDataLoaded_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____IsCloudDataLoaded_k__BackingField) == 0x25, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____SessionsManager_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____instrumentsDataControllers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____UserProfileDataController_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____UserPreferencesDataController_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____UserFavoritesDataController_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____UserUpVotesDataController_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____LoopStationDataController_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____TapeRecorderDataController_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____BrowserDataController_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____SessionSettingsDataController_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____SynthsDataController_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____ModularDrumsDataController_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserDataControllers, ____MicrophoneDataController_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserDataControllers, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserDataControllers);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers*, "VROSC", "UserDataControllers");
NEED_NO_BOX(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers__MonitorPreviewGeneratingProgress_d__74*, "VROSC", "UserDataControllers/<MonitorPreviewGeneratingProgress>d__74");
NEED_NO_BOX(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers__MonitorPreviewSavingProgress_d__75*, "VROSC", "UserDataControllers/<MonitorPreviewSavingProgress>d__75");
NEED_NO_BOX(::VROSC::UserDataControllers___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers___c*, "VROSC", "UserDataControllers/<>c");
NEED_NO_BOX(::VROSC::UserDataControllers___c__DisplayClass70_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers___c__DisplayClass70_0*, "VROSC", "UserDataControllers/<>c__DisplayClass70_0");
NEED_NO_BOX(::VROSC::UserDataControllers___c__DisplayClass73_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers___c__DisplayClass73_0*, "VROSC", "UserDataControllers/<>c__DisplayClass73_0");
NEED_NO_BOX(::VROSC::UserDataControllers___c__DisplayClass73_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers___c__DisplayClass73_1*, "VROSC", "UserDataControllers/<>c__DisplayClass73_1");
NEED_NO_BOX(::VROSC::UserDataControllers___c__DisplayClass76_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers___c__DisplayClass76_0*, "VROSC", "UserDataControllers/<>c__DisplayClass76_0");
NEED_NO_BOX(::VROSC::UserDataControllers___c__DisplayClass76_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers___c__DisplayClass76_1*, "VROSC", "UserDataControllers/<>c__DisplayClass76_1");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers__LoadControllers_d__73, "VROSC", "UserDataControllers/<LoadControllers>d__73");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers__SaveControllers_d__76, "VROSC", "UserDataControllers/<SaveControllers>d__76");
