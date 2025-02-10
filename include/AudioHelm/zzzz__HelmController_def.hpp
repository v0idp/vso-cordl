#pragma once
// IWYU pragma private; include "AudioHelm/HelmController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__NoteHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmController)
namespace AudioHelm {
struct CommonParam;
}
namespace AudioHelm {
class HelmController__WaitFrequencyOff_d__54;
}
namespace AudioHelm {
class HelmController__WaitNoteOff_d__50;
}
namespace AudioHelm {
class HelmParameter;
}
namespace AudioHelm {
class HelmPatch;
}
namespace AudioHelm {
struct Param;
}
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
namespace System {
class Object;
}
// Forward declare root types
namespace AudioHelm {
class HelmController;
}
namespace AudioHelm {
class HelmController__WaitFrequencyOff_d__54;
}
namespace AudioHelm {
class HelmController__WaitNoteOff_d__50;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmController);
MARK_REF_PTR_T(::AudioHelm::HelmController__WaitFrequencyOff_d__54);
MARK_REF_PTR_T(::AudioHelm::HelmController__WaitNoteOff_d__50);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmController/<WaitFrequencyOff>d__54
class CORDL_TYPE HelmController__WaitFrequencyOff_d__54 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::AudioHelm::HelmController>  __4__this;

/// @brief Field frequency, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequency, put=__cordl_internal_set_frequency)) float_t  frequency;

/// @brief Field length, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) float_t  length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1820354, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::AudioHelm::HelmController__WaitFrequencyOff_d__54* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1820400, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1820408, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1820440, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1820350, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_frequency() const;

constexpr float_t& __cordl_internal_get_frequency() ;

constexpr float_t const& __cordl_internal_get_length() const;

constexpr float_t& __cordl_internal_get_length() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set_frequency(float_t  value) ;

constexpr void __cordl_internal_set_length(float_t  value) ;

/// @brief Method .ctor, addr 0x181fe9c, size 0x28, virtual false, abstract: false, final false
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
constexpr HelmController__WaitFrequencyOff_d__54() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmController__WaitFrequencyOff_d__54", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmController__WaitFrequencyOff_d__54(HelmController__WaitFrequencyOff_d__54 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmController__WaitFrequencyOff_d__54", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmController__WaitFrequencyOff_d__54(HelmController__WaitFrequencyOff_d__54 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1873};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field length, offset: 0x20, size: 0x4, def value: None
 float_t  ___length;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  _____4__this;

/// @brief Field frequency, offset: 0x30, size: 0x4, def value: None
 float_t  ___frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmController__WaitFrequencyOff_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitFrequencyOff_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitFrequencyOff_d__54, ___length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitFrequencyOff_d__54, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitFrequencyOff_d__54, ___frequency) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmController__WaitFrequencyOff_d__54, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmController/<WaitNoteOff>d__50
class CORDL_TYPE HelmController__WaitNoteOff_d__50 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::AudioHelm::HelmController>  __4__this;

/// @brief Field length, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) float_t  length;

/// @brief Field note, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_note, put=__cordl_internal_set_note)) int32_t  note;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x182044c, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::AudioHelm::HelmController__WaitNoteOff_d__50* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18204f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1820500, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1820538, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1820448, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_length() const;

constexpr float_t& __cordl_internal_get_length() ;

constexpr int32_t const& __cordl_internal_get_note() const;

constexpr int32_t& __cordl_internal_get_note() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set_length(float_t  value) ;

constexpr void __cordl_internal_set_note(int32_t  value) ;

/// @brief Method .ctor, addr 0x181fbf8, size 0x28, virtual false, abstract: false, final false
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
constexpr HelmController__WaitNoteOff_d__50() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmController__WaitNoteOff_d__50", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmController__WaitNoteOff_d__50(HelmController__WaitNoteOff_d__50 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmController__WaitNoteOff_d__50", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmController__WaitNoteOff_d__50(HelmController__WaitNoteOff_d__50 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1874};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field length, offset: 0x20, size: 0x4, def value: None
 float_t  ___length;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  _____4__this;

/// @brief Field note, offset: 0x30, size: 0x4, def value: None
 int32_t  ___note;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmController__WaitNoteOff_d__50, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitNoteOff_d__50, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitNoteOff_d__50, ___length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitNoteOff_d__50, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController__WaitNoteOff_d__50, ___note) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmController__WaitNoteOff_d__50, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies AudioHelm.NoteHandler, UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmController
class CORDL_TYPE HelmController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitFrequencyOff_d__54 = ::AudioHelm::HelmController__WaitFrequencyOff_d__54;

using _WaitNoteOff_d__50 = ::AudioHelm::HelmController__WaitNoteOff_d__50;

/// @brief Field channel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) int32_t  channel;

/// @brief Field paramValues, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_paramValues, put=__cordl_internal_set_paramValues)) ::ArrayW<float_t,::Array<float_t>*>  paramValues;

/// @brief Field pressedFrequencies, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressedFrequencies, put=__cordl_internal_set_pressedFrequencies)) ::System::Collections::Generic::Dictionary_2<float_t,int32_t>*  pressedFrequencies;

/// @brief Field pressedNotes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressedNotes, put=__cordl_internal_set_pressedNotes)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pressedNotes;

/// @brief Field synthParamValue0, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue0, put=__cordl_internal_set_synthParamValue0)) float_t  synthParamValue0;

/// @brief Field synthParamValue1, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue1, put=__cordl_internal_set_synthParamValue1)) float_t  synthParamValue1;

/// @brief Field synthParamValue10, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue10, put=__cordl_internal_set_synthParamValue10)) float_t  synthParamValue10;

/// @brief Field synthParamValue11, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue11, put=__cordl_internal_set_synthParamValue11)) float_t  synthParamValue11;

/// @brief Field synthParamValue12, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue12, put=__cordl_internal_set_synthParamValue12)) float_t  synthParamValue12;

/// @brief Field synthParamValue13, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue13, put=__cordl_internal_set_synthParamValue13)) float_t  synthParamValue13;

/// @brief Field synthParamValue14, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue14, put=__cordl_internal_set_synthParamValue14)) float_t  synthParamValue14;

/// @brief Field synthParamValue15, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue15, put=__cordl_internal_set_synthParamValue15)) float_t  synthParamValue15;

/// @brief Field synthParamValue2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue2, put=__cordl_internal_set_synthParamValue2)) float_t  synthParamValue2;

/// @brief Field synthParamValue3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue3, put=__cordl_internal_set_synthParamValue3)) float_t  synthParamValue3;

/// @brief Field synthParamValue4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue4, put=__cordl_internal_set_synthParamValue4)) float_t  synthParamValue4;

/// @brief Field synthParamValue5, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue5, put=__cordl_internal_set_synthParamValue5)) float_t  synthParamValue5;

/// @brief Field synthParamValue6, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue6, put=__cordl_internal_set_synthParamValue6)) float_t  synthParamValue6;

/// @brief Field synthParamValue7, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue7, put=__cordl_internal_set_synthParamValue7)) float_t  synthParamValue7;

/// @brief Field synthParamValue8, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue8, put=__cordl_internal_set_synthParamValue8)) float_t  synthParamValue8;

/// @brief Field synthParamValue9, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_synthParamValue9, put=__cordl_internal_set_synthParamValue9)) float_t  synthParamValue9;

/// @brief Field synthParameters, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_synthParameters, put=__cordl_internal_set_synthParameters)) ::System::Collections::Generic::List_1<::AudioHelm::HelmParameter*>*  synthParameters;

/// @brief Convert operator to "::AudioHelm::NoteHandler"
constexpr operator  ::AudioHelm::NoteHandler*() noexcept;

/// @brief Method AddEmptyParameter, addr 0x181f454, size 0x10c, virtual false, abstract: false, final false
inline ::AudioHelm::HelmParameter* AddEmptyParameter() ;

/// @brief Method AddParameter, addr 0x181f5a0, size 0x100, virtual false, abstract: false, final false
inline ::AudioHelm::HelmParameter* AddParameter(::AudioHelm::Param  parameter) ;

/// @brief Method AllNotesOff, addr 0x181e674, size 0x7c, virtual true, abstract: false, final true
inline void AllNotesOff() ;

/// @brief Method Awake, addr 0x181e6f0, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x18201ec, size 0x34, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FrequencyOff, addr 0x181fec4, size 0xdc, virtual false, abstract: false, final false
inline void FrequencyOff(float_t  frequency) ;

/// @brief Method FrequencyOn, addr 0x181fce4, size 0xb0, virtual false, abstract: false, final false
inline void FrequencyOn(float_t  frequency, float_t  velocity) ;

/// @brief Method FrequencyOn, addr 0x181fca4, size 0x40, virtual false, abstract: false, final false
inline void FrequencyOn(float_t  frequency, float_t  velocity, float_t  length) ;

/// @brief Method GetParameterAtIndex, addr 0x181f0a0, size 0xf8, virtual false, abstract: false, final false
inline float_t GetParameterAtIndex(int32_t  index) ;

/// @brief Method GetParameterPercent, addr 0x181f98c, size 0x8, virtual false, abstract: false, final false
inline float_t GetParameterPercent(::AudioHelm::CommonParam  parameter) ;

/// @brief Method GetParameterPercent, addr 0x181f8e0, size 0x8, virtual false, abstract: false, final false
inline float_t GetParameterPercent(::AudioHelm::Param  parameter) ;

/// @brief Method GetParameterValue, addr 0x181f84c, size 0x8, virtual false, abstract: false, final false
inline float_t GetParameterValue(::AudioHelm::CommonParam  parameter) ;

/// @brief Method GetParameterValue, addr 0x181f7c0, size 0x8, virtual false, abstract: false, final false
inline float_t GetParameterValue(::AudioHelm::Param  parameter) ;

/// @brief Method GetPressedNotes, addr 0x181fadc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GetPressedNotes() ;

/// @brief Method IsFrequencyOn, addr 0x181fa7c, size 0x60, virtual false, abstract: false, final false
inline bool IsFrequencyOn(float_t  frequency) ;

/// @brief Method IsNoteOn, addr 0x181fa24, size 0x58, virtual false, abstract: false, final false
inline bool IsNoteOn(int32_t  note) ;

/// @brief Method LoadPatch, addr 0x181e778, size 0x424, virtual false, abstract: false, final false
inline void LoadPatch(::AudioHelm::HelmPatch*  patch) ;

static inline ::AudioHelm::HelmController* New_ctor() ;

/// @brief Method NoteOff, addr 0x181ab5c, size 0xd4, virtual true, abstract: false, final true
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x181a9f0, size 0xb0, virtual true, abstract: false, final true
inline void NoteOn(int32_t  note, float_t  velocity) ;

/// @brief Method NoteOn, addr 0x1819cf0, size 0x48, virtual false, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity, float_t  length) ;

/// @brief Method OnDestroy, addr 0x181e670, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PopulateParamsArray, addr 0x181f258, size 0x11c, virtual false, abstract: false, final false
inline void PopulateParamsArray() ;

/// @brief Method ReloadPatch, addr 0x181ed88, size 0x318, virtual false, abstract: false, final false
inline void ReloadPatch(::AudioHelm::HelmPatch*  patch) ;

/// @brief Method RemoveParameter, addr 0x181f730, size 0x90, virtual false, abstract: false, final false
inline int32_t RemoveParameter(::AudioHelm::HelmParameter*  parameter) ;

/// @brief Method SetAftertouch, addr 0x1820150, size 0x8, virtual false, abstract: false, final false
inline void SetAftertouch(int32_t  note, float_t  aftertouchValue) ;

/// @brief Method SetModWheel, addr 0x18200c0, size 0x8, virtual false, abstract: false, final false
inline void SetModWheel(float_t  wheelValue) ;

/// @brief Method SetParameterAtIndex, addr 0x181ce8c, size 0x100, virtual false, abstract: false, final false
inline void SetParameterAtIndex(int32_t  index, float_t  newValue) ;

/// @brief Method SetParameterPercent, addr 0x181f994, size 0x8, virtual false, abstract: false, final false
inline void SetParameterPercent(::AudioHelm::CommonParam  parameter, float_t  newPercent) ;

/// @brief Method SetParameterPercent, addr 0x181f8e8, size 0x8, virtual false, abstract: false, final false
inline void SetParameterPercent(::AudioHelm::Param  parameter, float_t  newPercent) ;

/// @brief Method SetParameterValue, addr 0x181f8d8, size 0x8, virtual false, abstract: false, final false
inline void SetParameterValue(::AudioHelm::CommonParam  parameter, float_t  newValue) ;

/// @brief Method SetParameterValue, addr 0x181d2a0, size 0x8, virtual false, abstract: false, final false
inline void SetParameterValue(::AudioHelm::Param  parameter, float_t  newValue) ;

/// @brief Method SetPitchWheel, addr 0x182002c, size 0x8, virtual false, abstract: false, final false
inline void SetPitchWheel(float_t  wheelValue) ;

/// @brief Method SetPolyphony, addr 0x181f99c, size 0x10, virtual false, abstract: false, final false
inline void SetPolyphony(int32_t  numVoices) ;

/// @brief Method Start, addr 0x181e6f4, size 0x84, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAllParameters, addr 0x181f198, size 0xc0, virtual false, abstract: false, final false
inline void UpdateAllParameters() ;

/// @brief Method UpdateParameter, addr 0x181f38c, size 0xc8, virtual false, abstract: false, final false
inline void UpdateParameter(int32_t  index) ;

/// @brief Method WaitFrequencyOff, addr 0x181fd94, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitFrequencyOff(float_t  frequency, float_t  length) ;

/// @brief Method WaitNoteOff, addr 0x181fae4, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitNoteOff(int32_t  note, float_t  length) ;

constexpr int32_t const& __cordl_internal_get_channel() const;

constexpr int32_t& __cordl_internal_get_channel() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_paramValues() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_paramValues() ;

constexpr ::System::Collections::Generic::Dictionary_2<float_t,int32_t>* const& __cordl_internal_get_pressedFrequencies() const;

constexpr ::System::Collections::Generic::Dictionary_2<float_t,int32_t>*& __cordl_internal_get_pressedFrequencies() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_pressedNotes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_pressedNotes() ;

constexpr float_t const& __cordl_internal_get_synthParamValue0() const;

constexpr float_t& __cordl_internal_get_synthParamValue0() ;

constexpr float_t const& __cordl_internal_get_synthParamValue1() const;

constexpr float_t& __cordl_internal_get_synthParamValue1() ;

constexpr float_t const& __cordl_internal_get_synthParamValue10() const;

constexpr float_t& __cordl_internal_get_synthParamValue10() ;

constexpr float_t const& __cordl_internal_get_synthParamValue11() const;

constexpr float_t& __cordl_internal_get_synthParamValue11() ;

constexpr float_t const& __cordl_internal_get_synthParamValue12() const;

constexpr float_t& __cordl_internal_get_synthParamValue12() ;

constexpr float_t const& __cordl_internal_get_synthParamValue13() const;

constexpr float_t& __cordl_internal_get_synthParamValue13() ;

constexpr float_t const& __cordl_internal_get_synthParamValue14() const;

constexpr float_t& __cordl_internal_get_synthParamValue14() ;

constexpr float_t const& __cordl_internal_get_synthParamValue15() const;

constexpr float_t& __cordl_internal_get_synthParamValue15() ;

constexpr float_t const& __cordl_internal_get_synthParamValue2() const;

constexpr float_t& __cordl_internal_get_synthParamValue2() ;

constexpr float_t const& __cordl_internal_get_synthParamValue3() const;

constexpr float_t& __cordl_internal_get_synthParamValue3() ;

constexpr float_t const& __cordl_internal_get_synthParamValue4() const;

constexpr float_t& __cordl_internal_get_synthParamValue4() ;

constexpr float_t const& __cordl_internal_get_synthParamValue5() const;

constexpr float_t& __cordl_internal_get_synthParamValue5() ;

constexpr float_t const& __cordl_internal_get_synthParamValue6() const;

constexpr float_t& __cordl_internal_get_synthParamValue6() ;

constexpr float_t const& __cordl_internal_get_synthParamValue7() const;

constexpr float_t& __cordl_internal_get_synthParamValue7() ;

constexpr float_t const& __cordl_internal_get_synthParamValue8() const;

constexpr float_t& __cordl_internal_get_synthParamValue8() ;

constexpr float_t const& __cordl_internal_get_synthParamValue9() const;

constexpr float_t& __cordl_internal_get_synthParamValue9() ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::HelmParameter*>* const& __cordl_internal_get_synthParameters() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::HelmParameter*>*& __cordl_internal_get_synthParameters() ;

constexpr void __cordl_internal_set_channel(int32_t  value) ;

constexpr void __cordl_internal_set_paramValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_pressedFrequencies(::System::Collections::Generic::Dictionary_2<float_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_pressedNotes(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_synthParamValue0(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue1(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue10(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue11(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue12(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue13(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue14(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue15(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue2(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue3(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue4(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue5(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue6(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue7(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue8(float_t  value) ;

constexpr void __cordl_internal_set_synthParamValue9(float_t  value) ;

constexpr void __cordl_internal_set_synthParameters(::System::Collections::Generic::List_1<::AudioHelm::HelmParameter*>*  value) ;

/// @brief Method .ctor, addr 0x1820220, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::AudioHelm::NoteHandler"
constexpr ::AudioHelm::NoteHandler* i___AudioHelm__NoteHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmController(HelmController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmController(HelmController const& ) = delete;

/// @brief Field MAX_PARAMETERS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PARAMETERS{static_cast<int32_t>(0x10)};

/// @brief Field UPDATE_WAIT offset 0xffffffff size 0x4
static constexpr float_t  UPDATE_WAIT{static_cast<float_t>(0.04f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1875};

/// @brief Field channel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___channel;

/// @brief Field synthParamValue0, offset: 0x24, size: 0x4, def value: None
 float_t  ___synthParamValue0;

/// @brief Field synthParamValue1, offset: 0x28, size: 0x4, def value: None
 float_t  ___synthParamValue1;

/// @brief Field synthParamValue2, offset: 0x2c, size: 0x4, def value: None
 float_t  ___synthParamValue2;

/// @brief Field synthParamValue3, offset: 0x30, size: 0x4, def value: None
 float_t  ___synthParamValue3;

/// @brief Field synthParamValue4, offset: 0x34, size: 0x4, def value: None
 float_t  ___synthParamValue4;

/// @brief Field synthParamValue5, offset: 0x38, size: 0x4, def value: None
 float_t  ___synthParamValue5;

/// @brief Field synthParamValue6, offset: 0x3c, size: 0x4, def value: None
 float_t  ___synthParamValue6;

/// @brief Field synthParamValue7, offset: 0x40, size: 0x4, def value: None
 float_t  ___synthParamValue7;

/// @brief Field synthParamValue8, offset: 0x44, size: 0x4, def value: None
 float_t  ___synthParamValue8;

/// @brief Field synthParamValue9, offset: 0x48, size: 0x4, def value: None
 float_t  ___synthParamValue9;

/// @brief Field synthParamValue10, offset: 0x4c, size: 0x4, def value: None
 float_t  ___synthParamValue10;

/// @brief Field synthParamValue11, offset: 0x50, size: 0x4, def value: None
 float_t  ___synthParamValue11;

/// @brief Field synthParamValue12, offset: 0x54, size: 0x4, def value: None
 float_t  ___synthParamValue12;

/// @brief Field synthParamValue13, offset: 0x58, size: 0x4, def value: None
 float_t  ___synthParamValue13;

/// @brief Field synthParamValue14, offset: 0x5c, size: 0x4, def value: None
 float_t  ___synthParamValue14;

/// @brief Field synthParamValue15, offset: 0x60, size: 0x4, def value: None
 float_t  ___synthParamValue15;

/// @brief Field paramValues, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___paramValues;

/// @brief Field synthParameters, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::HelmParameter*>*  ___synthParameters;

/// @brief Field pressedNotes, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___pressedNotes;

/// @brief Field pressedFrequencies, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<float_t,int32_t>*  ___pressedFrequencies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmController, ___channel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue0) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue6) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue7) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue8) == 0x44, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue9) == 0x48, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue10) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue11) == 0x50, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue12) == 0x54, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue13) == 0x58, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue14) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParamValue15) == 0x60, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___paramValues) == 0x68, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___synthParameters) == 0x70, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___pressedNotes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmController, ___pressedFrequencies) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmController, 0x88>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmController);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmController*, "AudioHelm", "HelmController");
NEED_NO_BOX(::AudioHelm::HelmController__WaitFrequencyOff_d__54);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmController__WaitFrequencyOff_d__54*, "AudioHelm", "HelmController/<WaitFrequencyOff>d__54");
NEED_NO_BOX(::AudioHelm::HelmController__WaitNoteOff_d__50);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmController__WaitNoteOff_d__50*, "AudioHelm", "HelmController/<WaitNoteOff>d__50");
