#pragma once
// IWYU pragma private; include "VROSC/NoteBoard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Node_impl.hpp"
#include "VROSC/zzzz__Note_impl.hpp"
#include "VROSC/zzzz__Scale_impl.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ControllerInputNode_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "VROSC/zzzz__NoteFieldNoteData_def.hpp"
#include "VROSC/zzzz__NoteFieldParameters_def.hpp"
#include "VROSC/zzzz__NoteField_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__ScaleNode_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NoteBoard_Axis::NoteBoard_Axis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoard_Axis::NoteBoard_Axis()   {
}
constexpr ::VROSC::NoteBoard_Axis  VROSC::NoteBoard_Axis::X{static_cast<int32_t>(0x0)};
constexpr ::VROSC::NoteBoard_Axis  VROSC::NoteBoard_Axis::Y{static_cast<int32_t>(0x1)};
constexpr ::VROSC::NoteBoard_Axis  VROSC::NoteBoard_Axis::Z{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NoteBoard_PlayAxis::NoteBoard_PlayAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoard_PlayAxis::NoteBoard_PlayAxis()   {
}
constexpr ::VROSC::NoteBoard_PlayAxis  VROSC::NoteBoard_PlayAxis::All{static_cast<int32_t>(0x0)};
constexpr ::VROSC::NoteBoard_PlayAxis  VROSC::NoteBoard_PlayAxis::X{static_cast<int32_t>(0x1)};
constexpr ::VROSC::NoteBoard_PlayAxis  VROSC::NoteBoard_PlayAxis::Y{static_cast<int32_t>(0x2)};
constexpr ::VROSC::NoteBoard_PlayAxis  VROSC::NoteBoard_PlayAxis::Z{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard_NoteAxis::*)(::VROSC::NoteBoard_Axis)>(&::VROSC::NoteBoard_NoteAxis::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_Axis>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.get_Scale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (::VROSC::NoteBoard_NoteAxis::*)()>(&::VROSC::NoteBoard_NoteAxis::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "get_Scale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.set_Scale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard_NoteAxis::*)(::VROSC::Scale)>(&::VROSC::NoteBoard_NoteAxis::set_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "set_Scale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.get_StartNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Note (::VROSC::NoteBoard_NoteAxis::*)()>(&::VROSC::NoteBoard_NoteAxis::get_StartNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "get_StartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.set_StartNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard_NoteAxis::*)(::VROSC::Note)>(&::VROSC::NoteBoard_NoteAxis::set_StartNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "set_StartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.get_Axis
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoard_Axis (::VROSC::NoteBoard_NoteAxis::*)()>(&::VROSC::NoteBoard_NoteAxis::get_Axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "get_Axis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.set_Axis
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard_NoteAxis::*)(::VROSC::NoteBoard_Axis)>(&::VROSC::NoteBoard_NoteAxis::set_Axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "set_Axis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_Axis>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis.UpdateAndReturnIsDirty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteBoard_NoteAxis::*)(::VROSC::Scale, ::VROSC::Note)>(&::VROSC::NoteBoard_NoteAxis::UpdateAndReturnIsDirty)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x17247ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "UpdateAndReturnIsDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard_NoteAxis._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard_NoteAxis::*)()>(&::VROSC::NoteBoard_NoteAxis::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Scale& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__Scale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale_k__BackingField;
}
constexpr ::VROSC::Scale const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__Scale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale_k__BackingField;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__Scale_k__BackingField(::VROSC::Scale  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scale_k__BackingField = value;
}
constexpr ::VROSC::Note& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__StartNote_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartNote_k__BackingField;
}
constexpr ::VROSC::Note const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__StartNote_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartNote_k__BackingField;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__StartNote_k__BackingField(::VROSC::Note  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartNote_k__BackingField = value;
}
constexpr ::VROSC::NoteBoard_Axis& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__Axis_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis_k__BackingField;
}
constexpr ::VROSC::NoteBoard_Axis const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__Axis_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis_k__BackingField;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__Axis_k__BackingField(::VROSC::NoteBoard_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Axis_k__BackingField = value;
}
constexpr bool& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_OverrideBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideBoard;
}
constexpr bool const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_OverrideBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideBoard;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set_OverrideBoard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideBoard = value;
}
constexpr ::UnityW<::VROSC::ScaleNode>& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_OverrideScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideScale;
}
constexpr ::UnityW<::VROSC::ScaleNode> const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_OverrideScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideScale;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set_OverrideScale(::UnityW<::VROSC::ScaleNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OverrideScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteField*& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_OverrideStartNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideStartNote;
}
constexpr ::VROSC::NoteField* const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_OverrideStartNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideStartNote;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set_OverrideStartNote(::VROSC::NoteField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OverrideStartNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_StartOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartOctave;
}
constexpr ::VROSC::IntField* const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_StartOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartOctave;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set_StartOctave(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StartOctave)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_NumberOfNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfNotes;
}
constexpr ::VROSC::IntField* const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_NumberOfNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfNotes;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set_NumberOfNotes(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NumberOfNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_IntervalBetweenNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntervalBetweenNotes;
}
constexpr ::VROSC::IntField* const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get_IntervalBetweenNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntervalBetweenNotes;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set_IntervalBetweenNotes(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IntervalBetweenNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Scale& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScale;
}
constexpr ::VROSC::Scale const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScale;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__lastScale(::VROSC::Scale  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastScale = value;
}
constexpr ::VROSC::Note& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastStartNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStartNote;
}
constexpr ::VROSC::Note const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastStartNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStartNote;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__lastStartNote(::VROSC::Note  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStartNote = value;
}
constexpr int32_t& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastStartOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStartOctave;
}
constexpr int32_t const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastStartOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStartOctave;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__lastStartOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStartOctave = value;
}
constexpr int32_t& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastNumberOfNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastNumberOfNotes;
}
constexpr int32_t const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastNumberOfNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastNumberOfNotes;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__lastNumberOfNotes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastNumberOfNotes = value;
}
constexpr int32_t& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastIntervalBetweenNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastIntervalBetweenNotes;
}
constexpr int32_t const& VROSC::NoteBoard_NoteAxis::__cordl_internal_get__lastIntervalBetweenNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastIntervalBetweenNotes;
}
constexpr void VROSC::NoteBoard_NoteAxis::__cordl_internal_set__lastIntervalBetweenNotes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastIntervalBetweenNotes = value;
}
inline void VROSC::NoteBoard_NoteAxis::Init(::VROSC::NoteBoard_Axis  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_Axis>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis);
}
inline ::VROSC::Scale VROSC::NoteBoard_NoteAxis::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "get_Scale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Scale, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard_NoteAxis::set_Scale(::VROSC::Scale  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "set_Scale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Note VROSC::NoteBoard_NoteAxis::get_StartNote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "get_StartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Note, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard_NoteAxis::set_StartNote(::VROSC::Note  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "set_StartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::NoteBoard_Axis VROSC::NoteBoard_NoteAxis::get_Axis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "get_Axis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteBoard_Axis, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard_NoteAxis::set_Axis(::VROSC::NoteBoard_Axis  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "set_Axis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_Axis>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::NoteBoard_NoteAxis::UpdateAndReturnIsDirty(::VROSC::Scale  noteBoardScale, ::VROSC::Note  noteBoardStartNote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        "UpdateAndReturnIsDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, noteBoardScale, noteBoardStartNote);
}
inline void VROSC::NoteBoard_NoteAxis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard_NoteAxis*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoard_NoteAxis* VROSC::NoteBoard_NoteAxis::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoard_NoteAxis*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoard_NoteAxis::NoteBoard_NoteAxis()   {
}
//  Writing Method size for method: ::VROSC::NoteBoard.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17242ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::LateUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17245e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::Setup)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x17242b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.CheckScaleAndBase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::CheckScaleAndBase)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1724604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "CheckScaleAndBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.UpdateScaleAndBase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::UpdateScaleAndBase)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1724630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "UpdateScaleAndBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.UpdateAxisesAndReturnIfDirty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::UpdateAxisesAndReturnIfDirty)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1724660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "UpdateAxisesAndReturnIfDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.CreateNoteFieldParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldParameters* (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::CreateNoteFieldParameters)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1724760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "CreateNoteFieldParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.HoverBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)(::VROSC::InputDevice*)>(&::VROSC::NoteBoard::HoverBegin)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1724960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "HoverBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.Hover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)(::VROSC::InputDevice*)>(&::VROSC::NoteBoard::Hover)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17249d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "Hover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.HoverEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)(::VROSC::InputDevice*)>(&::VROSC::NoteBoard::HoverEnd)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1724a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "HoverEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.GetNoteField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (::VROSC::NoteBoard::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoard::GetNoteField)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x171be1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetNoteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.GetNormalizedPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::NoteBoard::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoard::GetNormalizedPoint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x171b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetNormalizedPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.GetNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::NoteBoard::*)(::UnityEngine::Vector3, ::VROSC::NoteBoard_PlayAxis)>(&::VROSC::NoteBoard::GetNote)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x171ea54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (::VROSC::NoteBoard::*)(::VROSC::NoteBoard_PlayAxis)>(&::VROSC::NoteBoard::GetScale)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x171bbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.NoteAxisToVector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::VROSC::NoteBoard_PlayAxis)>(&::VROSC::NoteBoard::NoteAxisToVector)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1724aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "NoteAxisToVector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard.NoteAxisToVector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::VROSC::NoteBoard_PlayAxis, ::VROSC::NoteBoardNote_Coloring)>(&::VROSC::NoteBoard::NoteAxisToVector)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x171e238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "NoteAxisToVector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote_Coloring>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoard._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoard::*)()>(&::VROSC::NoteBoard::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1724bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ScaleNode>& VROSC::NoteBoard::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr ::UnityW<::VROSC::ScaleNode> const& VROSC::NoteBoard::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__scale(::UnityW<::VROSC::ScaleNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteField*& VROSC::NoteBoard::__cordl_internal_get__startNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNote;
}
constexpr ::VROSC::NoteField* const& VROSC::NoteBoard::__cordl_internal_get__startNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNote;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__startNote(::VROSC::NoteField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteBoard_NoteAxis*& VROSC::NoteBoard::__cordl_internal_get__noteAxisX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxisX;
}
constexpr ::VROSC::NoteBoard_NoteAxis* const& VROSC::NoteBoard::__cordl_internal_get__noteAxisX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxisX;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__noteAxisX(::VROSC::NoteBoard_NoteAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteAxisX)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteBoard_NoteAxis*& VROSC::NoteBoard::__cordl_internal_get__noteAxisY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxisY;
}
constexpr ::VROSC::NoteBoard_NoteAxis* const& VROSC::NoteBoard::__cordl_internal_get__noteAxisY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxisY;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__noteAxisY(::VROSC::NoteBoard_NoteAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteAxisY)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteBoard_NoteAxis*& VROSC::NoteBoard::__cordl_internal_get__noteAxisZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxisZ;
}
constexpr ::VROSC::NoteBoard_NoteAxis* const& VROSC::NoteBoard::__cordl_internal_get__noteAxisZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxisZ;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__noteAxisZ(::VROSC::NoteBoard_NoteAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteAxisZ)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>& VROSC::NoteBoard::__cordl_internal_get__noteAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxes;
}
constexpr ::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*> const& VROSC::NoteBoard::__cordl_internal_get__noteAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteAxes;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__noteAxes(::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteAxes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteBoard_Axis& VROSC::NoteBoard::__cordl_internal_get__primaryAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryAxis;
}
constexpr ::VROSC::NoteBoard_Axis const& VROSC::NoteBoard::__cordl_internal_get__primaryAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryAxis;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__primaryAxis(::VROSC::NoteBoard_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryAxis = value;
}
constexpr ::UnityW<::VROSC::ControllerInputNode>& VROSC::NoteBoard::__cordl_internal_get__controllerInputNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerInputNode;
}
constexpr ::UnityW<::VROSC::ControllerInputNode> const& VROSC::NoteBoard::__cordl_internal_get__controllerInputNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerInputNode;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__controllerInputNode(::UnityW<::VROSC::ControllerInputNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerInputNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::NoteBoard::__cordl_internal_get__notefieldController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notefieldController;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::NoteBoard::__cordl_internal_get__notefieldController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notefieldController;
}
constexpr void VROSC::NoteBoard::__cordl_internal_set__notefieldController(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notefieldController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::NoteBoard::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard::CheckScaleAndBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "CheckScaleAndBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard::UpdateScaleAndBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "UpdateScaleAndBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::NoteBoard::UpdateAxisesAndReturnIfDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "UpdateAxisesAndReturnIfDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::VROSC::NoteFieldParameters* VROSC::NoteBoard::CreateNoteFieldParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "CreateNoteFieldParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteFieldParameters*, false>(this, ___internal_method);
}
inline void VROSC::NoteBoard::HoverBegin(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "HoverBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void VROSC::NoteBoard::Hover(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "Hover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void VROSC::NoteBoard::HoverEnd(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "HoverEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline ::VROSC::NoteFieldNoteData* VROSC::NoteBoard::GetNoteField(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetNoteField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteFieldNoteData*, false>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 VROSC::NoteBoard::GetNormalizedPoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetNormalizedPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position);
}
inline int32_t VROSC::NoteBoard::GetNote(::UnityEngine::Vector3  position, ::VROSC::NoteBoard_PlayAxis  playMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, playMode);
}
inline ::VROSC::Scale VROSC::NoteBoard::GetScale(::VROSC::NoteBoard_PlayAxis  playAxis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Scale, false>(this, ___internal_method, playAxis);
}
inline ::UnityEngine::Vector3 VROSC::NoteBoard::NoteAxisToVector(::VROSC::NoteBoard_PlayAxis  playAxis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "NoteAxisToVector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, playAxis);
}
inline ::UnityEngine::Vector3 VROSC::NoteBoard::NoteAxisToVector(::VROSC::NoteBoard_PlayAxis  playAxis, ::VROSC::NoteBoardNote_Coloring  coloring)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        "NoteAxisToVector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardNote_Coloring>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, playAxis, coloring);
}
inline void VROSC::NoteBoard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoard* VROSC::NoteBoard::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoard*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoard::NoteBoard()   {
}
