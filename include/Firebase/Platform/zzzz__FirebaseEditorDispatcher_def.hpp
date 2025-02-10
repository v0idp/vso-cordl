#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseEditorDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseEditorDispatcher)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Platform {
class FirebaseEditorDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::FirebaseEditorDispatcher);
// Dependencies System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseEditorDispatcher
class CORDL_TYPE FirebaseEditorDispatcher : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__mg$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache0, put=setStaticF___f__mg$cache0)) ::System::Action*  __f__mg$cache0;

/// @brief Field <>f__mg$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache1, put=setStaticF___f__mg$cache1)) ::System::Action*  __f__mg$cache1;

/// @brief Field <>f__mg$cache2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache2, put=setStaticF___f__mg$cache2)) ::System::Action*  __f__mg$cache2;

/// @brief Method AddRemoveCallbackToField, addr 0x191e40c, size 0x1d8, virtual false, abstract: false, final false
static inline void AddRemoveCallbackToField(::System::Reflection::FieldInfo*  eventField, ::System::Action*  callback, ::System::Object*  target, bool  add, ::StringW  errorMessage) ;

/// @brief Method ListenToPlayState, addr 0x191e92c, size 0x2dc, virtual false, abstract: false, final false
static inline void ListenToPlayState(bool  start) ;

/// @brief Method PlayModeStateChanged, addr 0x191ec08, size 0x22c, virtual false, abstract: false, final false
static inline void PlayModeStateChanged() ;

/// @brief Method PlayModeStateChangedWithArg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void PlayModeStateChangedWithArg(T  t) ;

/// @brief Method StartEditorUpdate, addr 0x191e2fc, size 0x110, virtual false, abstract: false, final false
static inline void StartEditorUpdate() ;

/// @brief Method StopEditorUpdate, addr 0x191e5e4, size 0xe8, virtual false, abstract: false, final false
static inline void StopEditorUpdate() ;

/// @brief Method Update, addr 0x191e6cc, size 0x90, virtual false, abstract: false, final false
static inline void Update() ;

static inline ::System::Action* getStaticF___f__mg$cache0() ;

static inline ::System::Action* getStaticF___f__mg$cache1() ;

static inline ::System::Action* getStaticF___f__mg$cache2() ;

/// @brief Method get_EditorApplicationType, addr 0x191e100, size 0x94, virtual false, abstract: false, final false
static inline ::System::Type* get_EditorApplicationType() ;

/// @brief Method get_EditorIsPlaying, addr 0x191e194, size 0xb4, virtual false, abstract: false, final false
static inline bool get_EditorIsPlaying() ;

/// @brief Method get_EditorIsPlayingOrWillChangePlaymode, addr 0x191e248, size 0xb4, virtual false, abstract: false, final false
static inline bool get_EditorIsPlayingOrWillChangePlaymode() ;

static inline void setStaticF___f__mg$cache0(::System::Action*  value) ;

static inline void setStaticF___f__mg$cache1(::System::Action*  value) ;

static inline void setStaticF___f__mg$cache2(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseEditorDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseEditorDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseEditorDispatcher(FirebaseEditorDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseEditorDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseEditorDispatcher(FirebaseEditorDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseEditorDispatcher, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::FirebaseEditorDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseEditorDispatcher*, "Firebase.Platform", "FirebaseEditorDispatcher");
