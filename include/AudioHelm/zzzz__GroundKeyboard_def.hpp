#pragma once
// IWYU pragma private; include "AudioHelm/GroundKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GroundKeyboard)
namespace AudioHelm {
class GroundKey;
}
namespace AudioHelm {
class GroundKeyboard__OnCollisionEnter_d__20;
}
namespace AudioHelm {
class GroundKeyboard__OnCollisionStay_d__19;
}
namespace AudioHelm {
class HelmController;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace AudioHelm {
class GroundKeyboard;
}
namespace AudioHelm {
class GroundKeyboard__OnCollisionEnter_d__20;
}
namespace AudioHelm {
class GroundKeyboard__OnCollisionStay_d__19;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::GroundKeyboard);
MARK_REF_PTR_T(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20);
MARK_REF_PTR_T(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.GroundKeyboard/<OnCollisionEnter>d__20
class CORDL_TYPE GroundKeyboard__OnCollisionEnter_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::AudioHelm::GroundKeyboard>  __4__this;

/// @brief Field collision, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collision, put=__cordl_internal_set_collision)) ::UnityEngine::Collision*  collision;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181b340, size 0x9c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x181b3dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x181b3e4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181b41c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181b33c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::AudioHelm::GroundKeyboard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::AudioHelm::GroundKeyboard>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Collision* const& __cordl_internal_get_collision() const;

constexpr ::UnityEngine::Collision*& __cordl_internal_get_collision() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::AudioHelm::GroundKeyboard>  value) ;

constexpr void __cordl_internal_set_collision(::UnityEngine::Collision*  value) ;

/// @brief Method .ctor, addr 0x181b02c, size 0x28, virtual false, abstract: false, final false
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
constexpr GroundKeyboard__OnCollisionEnter_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroundKeyboard__OnCollisionEnter_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroundKeyboard__OnCollisionEnter_d__20(GroundKeyboard__OnCollisionEnter_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroundKeyboard__OnCollisionEnter_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroundKeyboard__OnCollisionEnter_d__20(GroundKeyboard__OnCollisionEnter_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1852};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::GroundKeyboard>  _____4__this;

/// @brief Field collision, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Collision*  ___collision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20, ___collision) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.GroundKeyboard/<OnCollisionStay>d__19
class CORDL_TYPE GroundKeyboard__OnCollisionStay_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::AudioHelm::GroundKeyboard>  __4__this;

/// @brief Field collision, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collision, put=__cordl_internal_set_collision)) ::UnityEngine::Collision*  collision;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181b428, size 0x9c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::AudioHelm::GroundKeyboard__OnCollisionStay_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x181b4c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x181b4cc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181b504, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181b424, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::AudioHelm::GroundKeyboard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::AudioHelm::GroundKeyboard>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Collision* const& __cordl_internal_get_collision() const;

constexpr ::UnityEngine::Collision*& __cordl_internal_get_collision() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::AudioHelm::GroundKeyboard>  value) ;

constexpr void __cordl_internal_set_collision(::UnityEngine::Collision*  value) ;

/// @brief Method .ctor, addr 0x181af98, size 0x28, virtual false, abstract: false, final false
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
constexpr GroundKeyboard__OnCollisionStay_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroundKeyboard__OnCollisionStay_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroundKeyboard__OnCollisionStay_d__19(GroundKeyboard__OnCollisionStay_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroundKeyboard__OnCollisionStay_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroundKeyboard__OnCollisionStay_d__19(GroundKeyboard__OnCollisionStay_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1853};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::GroundKeyboard>  _____4__this;

/// @brief Field collision, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Collision*  ___collision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19, ___collision) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::GroundKeyboard__OnCollisionStay_d__19, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.GroundKeyboard
class CORDL_TYPE GroundKeyboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnCollisionEnter_d__20 = ::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20;

using _OnCollisionStay_d__19 = ::AudioHelm::GroundKeyboard__OnCollisionStay_d__19;

/// @brief Field currentIndices, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentIndices, put=__cordl_internal_set_currentIndices)) ::System::Collections::Generic::HashSet_1<int32_t>*  currentIndices;

/// @brief Field keyModel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyModel, put=__cordl_internal_set_keyModel)) ::UnityW<::AudioHelm::GroundKey>  keyModel;

/// @brief Field keyOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_keyOffset, put=__cordl_internal_set_keyOffset)) ::UnityEngine::Vector3  keyOffset;

/// @brief Field keys, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_keys, put=__cordl_internal_set_keys)) ::ArrayW<::UnityW<::AudioHelm::GroundKey>,::Array<::UnityW<::AudioHelm::GroundKey>>*>  keys;

/// @brief Field newIndices, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_newIndices, put=__cordl_internal_set_newIndices)) ::System::Collections::Generic::HashSet_1<int32_t>*  newIndices;

/// @brief Field numKeys, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_numKeys, put=__cordl_internal_set_numKeys)) int32_t  numKeys;

/// @brief Field octaveSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_octaveSize, put=__cordl_internal_set_octaveSize)) int32_t  octaveSize;

/// @brief Field scale, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::ArrayW<int32_t,::Array<int32_t>*>  scale;

/// @brief Field startingKey, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingKey, put=__cordl_internal_set_startingKey)) int32_t  startingKey;

/// @brief Field synth, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_synth, put=__cordl_internal_set_synth)) ::UnityW<::AudioHelm::HelmController>  synth;

/// @brief Field verticalOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalOffset, put=__cordl_internal_set_verticalOffset)) float_t  verticalOffset;

/// @brief Method CreateKey, addr 0x181a7c4, size 0x120, virtual false, abstract: false, final false
inline ::UnityW<::AudioHelm::GroundKey> CreateKey(int32_t  key) ;

/// @brief Method FixedUpdate, addr 0x181b054, size 0x1e4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetKeyFromIndex, addr 0x181a8e4, size 0x48, virtual false, abstract: false, final false
inline int32_t GetKeyFromIndex(int32_t  index) ;

/// @brief Method Impulse, addr 0x181ad7c, size 0x1b0, virtual false, abstract: false, final false
inline void Impulse(::UnityEngine::Collision*  collision) ;

static inline ::AudioHelm::GroundKeyboard* New_ctor() ;

/// @brief Method NoteOff, addr 0x181aaa0, size 0xbc, virtual false, abstract: false, final false
inline void NoteOff(int32_t  index) ;

/// @brief Method NoteOn, addr 0x181a92c, size 0xc4, virtual false, abstract: false, final false
inline void NoteOn(int32_t  index) ;

/// @brief Method OnCollisionEnter, addr 0x181afc0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionStay, addr 0x181af2c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method Start, addr 0x181a6d8, size 0xec, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryNoteOff, addr 0x181ad38, size 0x44, virtual false, abstract: false, final false
inline void TryNoteOff(int32_t  index) ;

/// @brief Method TryNoteOn, addr 0x181ac30, size 0x108, virtual false, abstract: false, final false
inline void TryNoteOn(int32_t  index, ::UnityEngine::Vector3  contactPoint) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_currentIndices() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_currentIndices() ;

constexpr ::UnityW<::AudioHelm::GroundKey> const& __cordl_internal_get_keyModel() const;

constexpr ::UnityW<::AudioHelm::GroundKey>& __cordl_internal_get_keyModel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_keyOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_keyOffset() ;

constexpr ::ArrayW<::UnityW<::AudioHelm::GroundKey>,::Array<::UnityW<::AudioHelm::GroundKey>>*> const& __cordl_internal_get_keys() const;

constexpr ::ArrayW<::UnityW<::AudioHelm::GroundKey>,::Array<::UnityW<::AudioHelm::GroundKey>>*>& __cordl_internal_get_keys() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_newIndices() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_newIndices() ;

constexpr int32_t const& __cordl_internal_get_numKeys() const;

constexpr int32_t& __cordl_internal_get_numKeys() ;

constexpr int32_t const& __cordl_internal_get_octaveSize() const;

constexpr int32_t& __cordl_internal_get_octaveSize() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get_scale() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get_scale() ;

constexpr int32_t const& __cordl_internal_get_startingKey() const;

constexpr int32_t& __cordl_internal_get_startingKey() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get_synth() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get_synth() ;

constexpr float_t const& __cordl_internal_get_verticalOffset() const;

constexpr float_t& __cordl_internal_get_verticalOffset() ;

constexpr void __cordl_internal_set_currentIndices(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_keyModel(::UnityW<::AudioHelm::GroundKey>  value) ;

constexpr void __cordl_internal_set_keyOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_keys(::ArrayW<::UnityW<::AudioHelm::GroundKey>,::Array<::UnityW<::AudioHelm::GroundKey>>*>  value) ;

constexpr void __cordl_internal_set_newIndices(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_numKeys(int32_t  value) ;

constexpr void __cordl_internal_set_octaveSize(int32_t  value) ;

constexpr void __cordl_internal_set_scale(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set_startingKey(int32_t  value) ;

constexpr void __cordl_internal_set_synth(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set_verticalOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x181b238, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroundKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroundKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroundKeyboard(GroundKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroundKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroundKeyboard(GroundKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1854};

/// @brief Field keyModel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::GroundKey>  ___keyModel;

/// @brief Field synth, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ___synth;

/// @brief Field keyOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___keyOffset;

/// @brief Field verticalOffset, offset: 0x3c, size: 0x4, def value: None
 float_t  ___verticalOffset;

/// @brief Field numKeys, offset: 0x40, size: 0x4, def value: None
 int32_t  ___numKeys;

/// @brief Field startingKey, offset: 0x44, size: 0x4, def value: None
 int32_t  ___startingKey;

/// @brief Field scale, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ___scale;

/// @brief Field octaveSize, offset: 0x50, size: 0x4, def value: None
 int32_t  ___octaveSize;

/// @brief Field keys, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::AudioHelm::GroundKey>,::Array<::UnityW<::AudioHelm::GroundKey>>*>  ___keys;

/// @brief Field currentIndices, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___currentIndices;

/// @brief Field newIndices, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___newIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::GroundKeyboard, ___keyModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___synth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___keyOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___verticalOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___numKeys) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___startingKey) == 0x44, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___scale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___octaveSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___keys) == 0x58, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___currentIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKeyboard, ___newIndices) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::GroundKeyboard, 0x70>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::GroundKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::GroundKeyboard*, "AudioHelm", "GroundKeyboard");
NEED_NO_BOX(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::GroundKeyboard__OnCollisionEnter_d__20*, "AudioHelm", "GroundKeyboard/<OnCollisionEnter>d__20");
NEED_NO_BOX(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::GroundKeyboard__OnCollisionStay_d__19*, "AudioHelm", "GroundKeyboard/<OnCollisionStay>d__19");
