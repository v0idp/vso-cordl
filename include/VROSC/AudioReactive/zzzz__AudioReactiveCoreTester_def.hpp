#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveCoreTester.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReactiveCoreTester)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace VROSC::AudioReactive {
class AudioReactiveCoreTester__TestAudioReactions_d__3;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class AudioReactiveCoreTester;
}
namespace VROSC::AudioReactive {
class AudioReactiveCoreTester__TestAudioReactions_d__3;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveCoreTester);
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveCoreTester/<TestAudioReactions>d__3
class CORDL_TYPE AudioReactiveCoreTester__TestAudioReactions_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::AudioReactive::AudioReactiveCoreTester>  __4__this;

/// @brief Field <beat>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__beat_5__2, put=__cordl_internal_set__beat_5__2)) int32_t  _beat_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d8f48, size 0x10c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d9054, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d905c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d9094, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d8f44, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::AudioReactive::AudioReactiveCoreTester> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::AudioReactive::AudioReactiveCoreTester>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__beat_5__2() const;

constexpr int32_t& __cordl_internal_get__beat_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::AudioReactive::AudioReactiveCoreTester>  value) ;

constexpr void __cordl_internal_set__beat_5__2(int32_t  value) ;

/// @brief Method .ctor, addr 0x17d8f14, size 0x28, virtual false, abstract: false, final false
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
constexpr AudioReactiveCoreTester__TestAudioReactions_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCoreTester__TestAudioReactions_d__3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveCoreTester__TestAudioReactions_d__3(AudioReactiveCoreTester__TestAudioReactions_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCoreTester__TestAudioReactions_d__3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveCoreTester__TestAudioReactions_d__3(AudioReactiveCoreTester__TestAudioReactions_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1538};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::AudioReactiveCoreTester>  _____4__this;

/// @brief Field <beat>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____beat_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3, ____beat_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveCoreTester
class CORDL_TYPE AudioReactiveCoreTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _TestAudioReactions_d__3 = ::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3;

/// @brief Field _bpm, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__bpm, put=__cordl_internal_set__bpm)) float_t  _bpm;

/// @brief Method BeatRecieved, addr 0x17d8e8c, size 0x88, virtual false, abstract: false, final false
inline void BeatRecieved(double_t  bpm) ;

static inline ::VROSC::AudioReactive::AudioReactiveCoreTester* New_ctor() ;

/// @brief Method Start, addr 0x17d8d1c, size 0x110, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TestAudioReactions, addr 0x17d8e2c, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TestAudioReactions() ;

constexpr float_t const& __cordl_internal_get__bpm() const;

constexpr float_t& __cordl_internal_get__bpm() ;

constexpr void __cordl_internal_set__bpm(float_t  value) ;

/// @brief Method .ctor, addr 0x17d8f3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveCoreTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCoreTester", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveCoreTester(AudioReactiveCoreTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveCoreTester", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveCoreTester(AudioReactiveCoreTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1539};

/// @brief Field _bpm, offset: 0x20, size: 0x4, def value: None
 float_t  ____bpm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveCoreTester, ____bpm) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveCoreTester, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveCoreTester);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveCoreTester*, "VROSC.AudioReactive", "AudioReactiveCoreTester");
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveCoreTester__TestAudioReactions_d__3*, "VROSC.AudioReactive", "AudioReactiveCoreTester/<TestAudioReactions>d__3");
