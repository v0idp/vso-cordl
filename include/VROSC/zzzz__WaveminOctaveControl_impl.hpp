#pragma once
// IWYU pragma private; include "VROSC/WaveminOctaveControl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__WaveminOctaveControl_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
//  Writing Method size for method: ::VROSC::WaveminOctaveControl.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveminOctaveControl::*)()>(&::VROSC::WaveminOctaveControl::Awake)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1796128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveminOctaveControl.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveminOctaveControl::*)()>(&::VROSC::WaveminOctaveControl::OnDestroy)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x17962a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveminOctaveControl.OctaveChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveminOctaveControl::*)(int32_t)>(&::VROSC::WaveminOctaveControl::OctaveChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1796408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "OctaveChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveminOctaveControl.NoteChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveminOctaveControl::*)(int32_t)>(&::VROSC::WaveminOctaveControl::NoteChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x179644c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "NoteChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveminOctaveControl._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveminOctaveControl::*)()>(&::VROSC::WaveminOctaveControl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1796454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::IntNode>& VROSC::WaveminOctaveControl::__cordl_internal_get__octave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octave;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::WaveminOctaveControl::__cordl_internal_get__octave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octave;
}
constexpr void VROSC::WaveminOctaveControl::__cordl_internal_set__octave(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____octave)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::IntNode>& VROSC::WaveminOctaveControl::__cordl_internal_get__note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::WaveminOctaveControl::__cordl_internal_get__note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr void VROSC::WaveminOctaveControl::__cordl_internal_set__note(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____note)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::WaveminOctaveControl::__cordl_internal_get__lastNoteValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastNoteValue;
}
constexpr int32_t const& VROSC::WaveminOctaveControl::__cordl_internal_get__lastNoteValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastNoteValue;
}
constexpr void VROSC::WaveminOctaveControl::__cordl_internal_set__lastNoteValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastNoteValue = value;
}
constexpr int32_t& VROSC::WaveminOctaveControl::__cordl_internal_get__lastOctaveValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastOctaveValue;
}
constexpr int32_t const& VROSC::WaveminOctaveControl::__cordl_internal_get__lastOctaveValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastOctaveValue;
}
constexpr void VROSC::WaveminOctaveControl::__cordl_internal_set__lastOctaveValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastOctaveValue = value;
}
inline void VROSC::WaveminOctaveControl::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveminOctaveControl::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveminOctaveControl::OctaveChanged(int32_t  octave)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "OctaveChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, octave);
}
inline void VROSC::WaveminOctaveControl::NoteChanged(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        "NoteChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void VROSC::WaveminOctaveControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveminOctaveControl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WaveminOctaveControl* VROSC::WaveminOctaveControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WaveminOctaveControl*>());
}
// Ctor Parameters []
constexpr ::VROSC::WaveminOctaveControl::WaveminOctaveControl()   {
}
