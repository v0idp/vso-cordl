#pragma once
// IWYU pragma private; include "VROSC/NoteManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
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
class ExternalSynthesizer;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
class InternalSynthesizer;
}
namespace VROSC {
class NoteManager_ActiveNote;
}
namespace VROSC {
struct NoteManager__Setup_d__16;
}
namespace VROSC {
class NoteManager___c__DisplayClass25_0;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class NoteManager;
}
namespace VROSC {
class NoteManager_ActiveNote;
}
namespace VROSC {
class NoteManager___c__DisplayClass25_0;
}
namespace VROSC {
struct NoteManager__Setup_d__16;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteManager);
MARK_REF_PTR_T(::VROSC::NoteManager_ActiveNote);
MARK_REF_PTR_T(::VROSC::NoteManager___c__DisplayClass25_0);
MARK_VAL_T(::VROSC::NoteManager__Setup_d__16);
// Dependencies System.Object, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteManager/ActiveNote
class CORDL_TYPE NoteManager_ActiveNote : public ::System::Object {
public:
// Declarations
/// @brief Field Channel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Channel, put=__cordl_internal_set_Channel)) int32_t  Channel;

/// @brief Field HandType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_HandType, put=__cordl_internal_set_HandType)) ::VROSC::HandType  HandType;

/// @brief Field Note, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Note, put=__cordl_internal_set_Note)) int32_t  Note;

/// @brief Field Patch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Patch, put=__cordl_internal_set_Patch)) ::System::Object*  Patch;

/// @brief Field Source, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::System::Object*  Source;

static inline ::VROSC::NoteManager_ActiveNote* New_ctor(int32_t  note, ::System::Object*  patch, ::VROSC::HandType  handType, int32_t  channel, ::System::Object*  source) ;

constexpr int32_t const& __cordl_internal_get_Channel() const;

constexpr int32_t& __cordl_internal_get_Channel() ;

constexpr ::VROSC::HandType const& __cordl_internal_get_HandType() const;

constexpr ::VROSC::HandType& __cordl_internal_get_HandType() ;

constexpr int32_t const& __cordl_internal_get_Note() const;

constexpr int32_t& __cordl_internal_get_Note() ;

constexpr ::System::Object* const& __cordl_internal_get_Patch() const;

constexpr ::System::Object*& __cordl_internal_get_Patch() ;

constexpr ::System::Object* const& __cordl_internal_get_Source() const;

constexpr ::System::Object*& __cordl_internal_get_Source() ;

constexpr void __cordl_internal_set_Channel(int32_t  value) ;

constexpr void __cordl_internal_set_HandType(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set_Note(int32_t  value) ;

constexpr void __cordl_internal_set_Patch(::System::Object*  value) ;

constexpr void __cordl_internal_set_Source(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x16ef464, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int32_t  note, ::System::Object*  patch, ::VROSC::HandType  handType, int32_t  channel, ::System::Object*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteManager_ActiveNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteManager_ActiveNote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteManager_ActiveNote(NoteManager_ActiveNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteManager_ActiveNote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteManager_ActiveNote(NoteManager_ActiveNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{764};

/// @brief Field Note, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Note;

/// @brief Field Patch, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___Patch;

/// @brief Field HandType, offset: 0x20, size: 0x4, def value: None
 ::VROSC::HandType  ___HandType;

/// @brief Field Channel, offset: 0x24, size: 0x4, def value: None
 int32_t  ___Channel;

/// @brief Field Source, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___Source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteManager_ActiveNote, ___Note) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager_ActiveNote, ___Patch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager_ActiveNote, ___HandType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager_ActiveNote, ___Channel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager_ActiveNote, ___Source) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteManager_ActiveNote, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteManager/<>c__DisplayClass25_0
class CORDL_TYPE NoteManager___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field channel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) int32_t  channel;

/// @brief Field patch, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_patch, put=__cordl_internal_set_patch)) ::System::Object*  patch;

static inline ::VROSC::NoteManager___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <AllNotesOff>b__0, addr 0x16efca8, size 0x3c, virtual false, abstract: false, final false
inline bool _AllNotesOff_b__0(::VROSC::NoteManager_ActiveNote*  a) ;

constexpr int32_t const& __cordl_internal_get_channel() const;

constexpr int32_t& __cordl_internal_get_channel() ;

constexpr ::System::Object* const& __cordl_internal_get_patch() const;

constexpr ::System::Object*& __cordl_internal_get_patch() ;

constexpr void __cordl_internal_set_channel(int32_t  value) ;

constexpr void __cordl_internal_set_patch(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x16efb54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteManager___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteManager___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteManager___c__DisplayClass25_0(NoteManager___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteManager___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteManager___c__DisplayClass25_0(NoteManager___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{765};

/// @brief Field patch, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___patch;

/// @brief Field channel, offset: 0x18, size: 0x4, def value: None
 int32_t  ___channel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteManager___c__DisplayClass25_0, ___patch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager___c__DisplayClass25_0, ___channel) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteManager___c__DisplayClass25_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteManager/<Setup>d__16
struct CORDL_TYPE NoteManager__Setup_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16efce4, size 0x1a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16efe84, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NoteManager__Setup_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NoteManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr NoteManager__Setup_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::NoteManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{766};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteManager__Setup_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager__Setup_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager__Setup_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager__Setup_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteManager__Setup_d__16, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteManager
class CORDL_TYPE NoteManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActiveNote = ::VROSC::NoteManager_ActiveNote;

using _Setup_d__16 = ::VROSC::NoteManager__Setup_d__16;

using __c__DisplayClass25_0 = ::VROSC::NoteManager___c__DisplayClass25_0;

 __declspec(property(get=get_ExternalSynthesizer)) ::UnityW<::VROSC::ExternalSynthesizer>  ExternalSynthesizer;

 __declspec(property(get=get_InternalSynthesizer)) ::UnityW<::VROSC::InternalSynthesizer>  InternalSynthesizer;

 __declspec(property(get=get_IsReady, put=set_IsReady)) bool  IsReady;

/// @brief Field OnAnyNotePlayed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAnyNotePlayed, put=setStaticF_OnAnyNotePlayed)) ::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>*  OnAnyNotePlayed;

/// @brief Field OnInstrumentEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnInstrumentEvent, put=setStaticF_OnInstrumentEvent)) ::System::Action_1<::VROSC::InstrumentEvent*>*  OnInstrumentEvent;

/// @brief Field OnReset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReset, put=setStaticF_OnReset)) ::System::Action*  OnReset;

/// @brief Field <IsReady>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReady_k__BackingField, put=__cordl_internal_set__IsReady_k__BackingField)) bool  _IsReady_k__BackingField;

/// @brief Field _activeNotes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeNotes, put=__cordl_internal_set__activeNotes)) ::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>*  _activeNotes;

/// @brief Field _externalSynthesizer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__externalSynthesizer, put=__cordl_internal_set__externalSynthesizer)) ::UnityW<::VROSC::ExternalSynthesizer>  _externalSynthesizer;

/// @brief Field _internalSynthesizer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalSynthesizer, put=__cordl_internal_set__internalSynthesizer)) ::UnityW<::VROSC::InternalSynthesizer>  _internalSynthesizer;

/// @brief Method AllNotesOff, addr 0x16efb5c, size 0xcc, virtual false, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method AllNotesOff, addr 0x16efa00, size 0x154, virtual false, abstract: false, final false
inline void AllNotesOff(::VROSC::WidgetSettings_Identifier  instrumentId, ::System::Object*  patch, int32_t  channel) ;

/// @brief Method Awake, addr 0x16eecbc, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetActiveNote, addr 0x16ef274, size 0x1f0, virtual false, abstract: false, final false
inline ::VROSC::NoteManager_ActiveNote* GetActiveNote(int32_t  note, ::System::Object*  patch, ::VROSC::HandType  handType, int32_t  channel, ::System::Object*  source) ;

/// @brief Method IsPlaying, addr 0x16ef6a4, size 0x50, virtual false, abstract: false, final false
inline bool IsPlaying() ;

static inline ::VROSC::NoteManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16eee44, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayNote, addr 0x16eef3c, size 0x338, virtual false, abstract: false, final false
inline void PlayNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, float_t  velocity, ::VROSC::PatchSettings*  patchSettings, int32_t  channel, ::System::Object*  source, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method SetChannel, addr 0x16ef950, size 0xb0, virtual false, abstract: false, final false
inline void SetChannel(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  channel, int32_t  oldChannel) ;

/// @brief Method SetParameter, addr 0x16ef6f4, size 0x1ac, virtual false, abstract: false, final false
inline void SetParameter(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  parameterValue, int32_t  parameterId, ::VROSC::PatchSettings*  patchSettings, int32_t  channel, ::VROSC::HandType  handType) ;

/// @brief Method SetVolume, addr 0x16ef8a0, size 0xb0, virtual false, abstract: false, final false
inline void SetVolume(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  volume, int32_t  channel) ;

/// @brief Method Setup, addr 0x16eedb4, size 0x90, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StopNote, addr 0x16ef4b8, size 0x1ec, virtual false, abstract: false, final false
inline void StopNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, ::VROSC::PatchSettings*  patchSettings, int32_t  channel, ::System::Object*  source, ::VROSC::HandType  handType) ;

/// @brief Method UserDataLoaded, addr 0x16efc28, size 0x4, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr bool const& __cordl_internal_get__IsReady_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReady_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>* const& __cordl_internal_get__activeNotes() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>*& __cordl_internal_get__activeNotes() ;

constexpr ::UnityW<::VROSC::ExternalSynthesizer> const& __cordl_internal_get__externalSynthesizer() const;

constexpr ::UnityW<::VROSC::ExternalSynthesizer>& __cordl_internal_get__externalSynthesizer() ;

constexpr ::UnityW<::VROSC::InternalSynthesizer> const& __cordl_internal_get__internalSynthesizer() const;

constexpr ::UnityW<::VROSC::InternalSynthesizer>& __cordl_internal_get__internalSynthesizer() ;

constexpr void __cordl_internal_set__IsReady_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeNotes(::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>*  value) ;

constexpr void __cordl_internal_set__externalSynthesizer(::UnityW<::VROSC::ExternalSynthesizer>  value) ;

constexpr void __cordl_internal_set__internalSynthesizer(::UnityW<::VROSC::InternalSynthesizer>  value) ;

/// @brief Method .ctor, addr 0x16efc2c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>* getStaticF_OnAnyNotePlayed() ;

static inline ::System::Action_1<::VROSC::InstrumentEvent*>* getStaticF_OnInstrumentEvent() ;

static inline ::System::Action* getStaticF_OnReset() ;

/// @brief Method get_ExternalSynthesizer, addr 0x16eec98, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ExternalSynthesizer> get_ExternalSynthesizer() ;

/// @brief Method get_InternalSynthesizer, addr 0x16eeca0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InternalSynthesizer> get_InternalSynthesizer() ;

/// @brief Method get_IsReady, addr 0x16eeca8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReady() ;

static inline void setStaticF_OnAnyNotePlayed(::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>*  value) ;

static inline void setStaticF_OnInstrumentEvent(::System::Action_1<::VROSC::InstrumentEvent*>*  value) ;

static inline void setStaticF_OnReset(::System::Action*  value) ;

/// @brief Method set_IsReady, addr 0x16eecb0, size 0xc, virtual false, abstract: false, final false
inline void set_IsReady(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteManager(NoteManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteManager(NoteManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{767};

/// @brief Field _externalSynthesizer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ExternalSynthesizer>  ____externalSynthesizer;

/// @brief Field _internalSynthesizer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InternalSynthesizer>  ____internalSynthesizer;

/// @brief Field _activeNotes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>*  ____activeNotes;

/// @brief Field <IsReady>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsReady_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteManager, ____externalSynthesizer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager, ____internalSynthesizer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager, ____activeNotes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteManager, ____IsReady_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteManager, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteManager*, "VROSC", "NoteManager");
NEED_NO_BOX(::VROSC::NoteManager_ActiveNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteManager_ActiveNote*, "VROSC", "NoteManager/ActiveNote");
NEED_NO_BOX(::VROSC::NoteManager___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteManager___c__DisplayClass25_0*, "VROSC", "NoteManager/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteManager__Setup_d__16, "VROSC", "NoteManager/<Setup>d__16");
