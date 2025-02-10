#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteController.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
#include "VROSC/zzzz__NoteFieldData_def.hpp"
#include "VROSC/zzzz__NoteFieldNoteData_def.hpp"
#include "VROSC/zzzz__NoteFieldParameters_def.hpp"
#include "VROSC/zzzz__NotefieldAnimationSettings_def.hpp"
#include "VROSC/zzzz__NotefieldColorSettings_def.hpp"
//  Writing Method size for method: ::VROSC::NoteBoardNoteController_HoveredNoteBoardNote._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController_HoveredNoteBoardNote::*)(::VROSC::NoteFieldNoteData*, ::VROSC::InputDevice*)>(&::VROSC::NoteBoardNoteController_HoveredNoteBoardNote::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17b58c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::NoteFieldNoteData*& VROSC::NoteBoardNoteController_HoveredNoteBoardNote::__cordl_internal_get_NoteBoardNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoteBoardNote;
}
constexpr ::VROSC::NoteFieldNoteData* const& VROSC::NoteBoardNoteController_HoveredNoteBoardNote::__cordl_internal_get_NoteBoardNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoteBoardNote;
}
constexpr void VROSC::NoteBoardNoteController_HoveredNoteBoardNote::__cordl_internal_set_NoteBoardNote(::VROSC::NoteFieldNoteData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NoteBoardNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::NoteBoardNoteController_HoveredNoteBoardNote::__cordl_internal_get_Device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Device;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::NoteBoardNoteController_HoveredNoteBoardNote::__cordl_internal_get_Device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Device;
}
constexpr void VROSC::NoteBoardNoteController_HoveredNoteBoardNote::__cordl_internal_set_Device(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::NoteBoardNoteController_HoveredNoteBoardNote::_ctor(::VROSC::NoteFieldNoteData*  noteBoardNote, ::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteBoardNote, device);
}
inline ::VROSC::NoteBoardNoteController_HoveredNoteBoardNote* VROSC::NoteBoardNoteController_HoveredNoteBoardNote::New_ctor(::VROSC::NoteFieldNoteData*  noteBoardNote, ::VROSC::InputDevice*  device)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>(noteBoardNote, device));
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNoteController_HoveredNoteBoardNote::NoteBoardNoteController_HoveredNoteBoardNote()   {
}
//  Writing Method size for method: ::VROSC::NoteBoardNoteController__BlinkNotes_d__28._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController__BlinkNotes_d__28::*)(int32_t)>(&::VROSC::NoteBoardNoteController__BlinkNotes_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17b5c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController__BlinkNotes_d__28.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController__BlinkNotes_d__28::*)()>(&::VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17b5eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController__BlinkNotes_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteBoardNoteController__BlinkNotes_d__28::*)()>(&::VROSC::NoteBoardNoteController__BlinkNotes_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x17b5ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController__BlinkNotes_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::NoteBoardNoteController__BlinkNotes_d__28::*)()>(&::VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b611c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController__BlinkNotes_d__28.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController__BlinkNotes_d__28::*)()>(&::VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17b6124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController__BlinkNotes_d__28.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::NoteBoardNoteController__BlinkNotes_d__28::*)()>(&::VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b615c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_set___4__this(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
constexpr float_t& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get__period_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____period_5__3;
}
constexpr float_t const& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get__period_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____period_5__3;
}
constexpr void VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_set__period_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____period_5__3 = value;
}
constexpr float_t& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get__maxValue_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue_5__4;
}
constexpr float_t const& VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_get__maxValue_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue_5__4;
}
constexpr void VROSC::NoteBoardNoteController__BlinkNotes_d__28::__cordl_internal_set__maxValue_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxValue_5__4 = value;
}
inline void VROSC::NoteBoardNoteController__BlinkNotes_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::NoteBoardNoteController__BlinkNotes_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::NoteBoardNoteController__BlinkNotes_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoardNoteController__BlinkNotes_d__28* VROSC::NoteBoardNoteController__BlinkNotes_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNoteController__BlinkNotes_d__28*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::NoteBoardNoteController__BlinkNotes_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::NoteBoardNoteController__BlinkNotes_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::NoteBoardNoteController__BlinkNotes_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::NoteBoardNoteController__BlinkNotes_d__28::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::NoteBoardNoteController__BlinkNotes_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::NoteBoardNoteController__BlinkNotes_d__28::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNoteController__BlinkNotes_d__28::NoteBoardNoteController__BlinkNotes_d__28()   {
}
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.set_NoteFieldData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)(::VROSC::NoteFieldData*)>(&::VROSC::NoteBoardNoteController::set_NoteFieldData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b4e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "set_NoteFieldData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.get_NoteFieldData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldData* (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::get_NoteFieldData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b4e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "get_NoteFieldData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.get_NoteBoardNoteList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>* (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::get_NoteBoardNoteList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b4e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "get_NoteBoardNoteList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.get_Settings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::NotefieldAnimationSettings> (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b4e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x17b4e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.ClearNotefield
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::ClearNotefield)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x17b2718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.UpdateNoteboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)(::VROSC::NoteFieldParameters*)>(&::VROSC::NoteBoardNoteController::UpdateNoteboard)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17b2d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.GetVisualPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::NoteBoardNoteController::*)(int32_t, int32_t, int32_t, ::VROSC::NoteFieldParameters*, ::UnityEngine::Vector3)>(&::VROSC::NoteBoardNoteController::GetVisualPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x17b2d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "GetVisualPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.GetNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (::VROSC::NoteBoardNoteController::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoardNoteController::GetNote)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17b53d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "GetNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.GetNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (::VROSC::NoteBoardNoteController::*)(int32_t, int32_t, int32_t)>(&::VROSC::NoteBoardNoteController::GetNote)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17b5484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.Hover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)(::VROSC::NoteFieldNoteData*, ::VROSC::InputDevice*)>(&::VROSC::NoteBoardNoteController::Hover)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x17b54a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "Hover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.HoverEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)(::VROSC::InputDevice*)>(&::VROSC::NoteBoardNoteController::HoverEnd)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x17b58f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "HoverEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.StartBlinkingNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::StartBlinkingNotes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17b5be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "StartBlinkingNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.BlinkNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::BlinkNotes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17b5c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "BlinkNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.StopBlinkingNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::StopBlinkingNotes)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x17b5c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "StopBlinkingNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x17b5e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteController::*)()>(&::VROSC::NoteBoardNoteController::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x17b3750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoardNote>& VROSC::NoteBoardNoteController::__cordl_internal_get__noteFieldPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteFieldPrefab;
}
constexpr ::UnityW<::VROSC::NoteBoardNote> const& VROSC::NoteBoardNoteController::__cordl_internal_get__noteFieldPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteFieldPrefab;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__noteFieldPrefab(::UnityW<::VROSC::NoteBoardNote>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteFieldPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::NoteBoardNoteController::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr ::UnityEngine::Vector3 const& VROSC::NoteBoardNoteController::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr ::UnityW<::VROSC::NotefieldAnimationSettings>& VROSC::NoteBoardNoteController::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::VROSC::NotefieldAnimationSettings> const& VROSC::NoteBoardNoteController::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__settings(::UnityW<::VROSC::NotefieldAnimationSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NotefieldColorSettings>& VROSC::NoteBoardNoteController::__cordl_internal_get__noteFieldSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteFieldSettings;
}
constexpr ::UnityW<::VROSC::NotefieldColorSettings> const& VROSC::NoteBoardNoteController::__cordl_internal_get__noteFieldSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteFieldSettings;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__noteFieldSettings(::UnityW<::VROSC::NotefieldColorSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteFieldSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteFieldData*& VROSC::NoteBoardNoteController::__cordl_internal_get__NoteFieldData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NoteFieldData_k__BackingField;
}
constexpr ::VROSC::NoteFieldData* const& VROSC::NoteBoardNoteController::__cordl_internal_get__NoteFieldData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NoteFieldData_k__BackingField;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__NoteFieldData_k__BackingField(::VROSC::NoteFieldData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NoteFieldData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*& VROSC::NoteBoardNoteController::__cordl_internal_get__noteBoardNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoardNotes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>* const& VROSC::NoteBoardNoteController::__cordl_internal_get__noteBoardNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoardNotes;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__noteBoardNotes(::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteBoardNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>*& VROSC::NoteBoardNoteController::__cordl_internal_get_OnHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHover;
}
constexpr ::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>* const& VROSC::NoteBoardNoteController::__cordl_internal_get_OnHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHover;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set_OnHover(::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnHover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*& VROSC::NoteBoardNoteController::__cordl_internal_get_OnNewNotefieldData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewNotefieldData;
}
constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>* const& VROSC::NoteBoardNoteController::__cordl_internal_get_OnNewNotefieldData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewNotefieldData;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set_OnNewNotefieldData(::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNewNotefieldData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*& VROSC::NoteBoardNoteController::__cordl_internal_get_OnNewNotefieldCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewNotefieldCreated;
}
constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>* const& VROSC::NoteBoardNoteController::__cordl_internal_get_OnNewNotefieldCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewNotefieldCreated;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set_OnNewNotefieldCreated(::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNewNotefieldCreated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& VROSC::NoteBoardNoteController::__cordl_internal_get__blinkCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blinkCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& VROSC::NoteBoardNoteController::__cordl_internal_get__blinkCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blinkCoroutine;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__blinkCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blinkCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>*& VROSC::NoteBoardNoteController::__cordl_internal_get__hoveredNoteBoardNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredNoteBoardNotes;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>* const& VROSC::NoteBoardNoteController::__cordl_internal_get__hoveredNoteBoardNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredNoteBoardNotes;
}
constexpr void VROSC::NoteBoardNoteController::__cordl_internal_set__hoveredNoteBoardNotes(::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveredNoteBoardNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::NoteBoardNoteController::set_NoteFieldData(::VROSC::NoteFieldData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "set_NoteFieldData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::NoteFieldData* VROSC::NoteBoardNoteController::get_NoteFieldData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "get_NoteFieldData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteFieldData*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>* VROSC::NoteBoardNoteController::get_NoteBoardNoteList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "get_NoteBoardNoteList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::NotefieldAnimationSettings> VROSC::NoteBoardNoteController::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::NotefieldAnimationSettings>, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController::ClearNotefield()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController::UpdateNoteboard(::VROSC::NoteFieldParameters*  parameters)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::UnityEngine::Vector3 VROSC::NoteBoardNoteController::GetVisualPosition(int32_t  x, int32_t  y, int32_t  z, ::VROSC::NoteFieldParameters*  parameters, ::UnityEngine::Vector3  fieldSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "GetVisualPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, x, y, z, parameters, fieldSize);
}
inline ::VROSC::NoteFieldNoteData* VROSC::NoteBoardNoteController::GetNote(::UnityEngine::Vector3  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "GetNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteFieldNoteData*, false>(this, ___internal_method, normalizedPoint);
}
inline ::VROSC::NoteFieldNoteData* VROSC::NoteBoardNoteController::GetNote(int32_t  x, int32_t  y, int32_t  z)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteFieldNoteData*, false>(this, ___internal_method, x, y, z);
}
inline void VROSC::NoteBoardNoteController::Hover(::VROSC::NoteFieldNoteData*  noteBoardNote, ::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "Hover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteBoardNote, device);
}
inline void VROSC::NoteBoardNoteController::HoverEnd(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "HoverEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void VROSC::NoteBoardNoteController::StartBlinkingNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "StartBlinkingNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* VROSC::NoteBoardNoteController::BlinkNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "BlinkNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController::StopBlinkingNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "StopBlinkingNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoardNoteController* VROSC::NoteBoardNoteController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNoteController*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNoteController::NoteBoardNoteController()   {
}
