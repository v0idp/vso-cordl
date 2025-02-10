#pragma once
// IWYU pragma private; include "VROSC/DebugInstrumentEventPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugInstrumentEventPlayer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace VROSC {
class DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class PatchSettings;
}
// Forward declare root types
namespace VROSC {
class DebugInstrumentEventPlayer;
}
namespace VROSC {
class DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DebugInstrumentEventPlayer);
MARK_REF_PTR_T(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DebugInstrumentEventPlayer/<DebugPlaybackInstrumentEvents>d__3
class CORDL_TYPE DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::DebugInstrumentEventPlayer>  __4__this;

/// @brief Field <eventList>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventList_5__3, put=__cordl_internal_set__eventList_5__3)) ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  _eventList_5__3;

/// @brief Field <instrumentEvents>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentEvents_5__2, put=__cordl_internal_set__instrumentEvents_5__2)) ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  _instrumentEvents_5__2;

/// @brief Field <patchSettings>5__4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__patchSettings_5__4, put=__cordl_internal_set__patchSettings_5__4)) ::VROSC::PatchSettings*  _patchSettings_5__4;

/// @brief Field <startTime>5__5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__startTime_5__5, put=__cordl_internal_set__startTime_5__5)) double_t  _startTime_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1891144, size 0x348, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x189148c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1891494, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18914cc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1891140, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::DebugInstrumentEventPlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::DebugInstrumentEventPlayer>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>* const& __cordl_internal_get__eventList_5__3() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*& __cordl_internal_get__eventList_5__3() ;

constexpr ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*> const& __cordl_internal_get__instrumentEvents_5__2() const;

constexpr ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>& __cordl_internal_get__instrumentEvents_5__2() ;

constexpr ::VROSC::PatchSettings* const& __cordl_internal_get__patchSettings_5__4() const;

constexpr ::VROSC::PatchSettings*& __cordl_internal_get__patchSettings_5__4() ;

constexpr double_t const& __cordl_internal_get__startTime_5__5() const;

constexpr double_t& __cordl_internal_get__startTime_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::DebugInstrumentEventPlayer>  value) ;

constexpr void __cordl_internal_set__eventList_5__3(::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  value) ;

constexpr void __cordl_internal_set__instrumentEvents_5__2(::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  value) ;

constexpr void __cordl_internal_set__patchSettings_5__4(::VROSC::PatchSettings*  value) ;

constexpr void __cordl_internal_set__startTime_5__5(double_t  value) ;

/// @brief Method .ctor, addr 0x1891110, size 0x28, virtual false, abstract: false, final false
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
constexpr DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3(DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3(DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{634};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::DebugInstrumentEventPlayer>  _____4__this;

/// @brief Field <instrumentEvents>5__2, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  ____instrumentEvents_5__2;

/// @brief Field <eventList>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  ____eventList_5__3;

/// @brief Field <patchSettings>5__4, offset: 0x38, size: 0x8, def value: None
 ::VROSC::PatchSettings*  ____patchSettings_5__4;

/// @brief Field <startTime>5__5, offset: 0x40, size: 0x8, def value: None
 double_t  ____startTime_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, ____instrumentEvents_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, ____eventList_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, ____patchSettings_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, ____startTime_5__5) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DebugInstrumentEventPlayer
class CORDL_TYPE DebugInstrumentEventPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DebugPlaybackInstrumentEvents_d__3 = ::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3;

/// @brief Field _loopPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Method Awake, addr 0x1891024, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DebugPlaybackInstrumentEvents, addr 0x18910b0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DebugPlaybackInstrumentEvents() ;

static inline ::VROSC::DebugInstrumentEventPlayer* New_ctor() ;

/// @brief Method Update, addr 0x1891074, size 0x3c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

/// @brief Method .ctor, addr 0x1891138, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugInstrumentEventPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugInstrumentEventPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugInstrumentEventPlayer(DebugInstrumentEventPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugInstrumentEventPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugInstrumentEventPlayer(DebugInstrumentEventPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{635};

/// @brief Field _loopPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DebugInstrumentEventPlayer, ____loopPlayer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DebugInstrumentEventPlayer, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DebugInstrumentEventPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DebugInstrumentEventPlayer*, "VROSC", "DebugInstrumentEventPlayer");
NEED_NO_BOX(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DebugInstrumentEventPlayer__DebugPlaybackInstrumentEvents_d__3*, "VROSC", "DebugInstrumentEventPlayer/<DebugPlaybackInstrumentEvents>d__3");
