#pragma once
// IWYU pragma private; include "VROSC/ScaleRandomizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__ScaleRandomizer_def.hpp"
#include "VROSC/zzzz__NoteNode_def.hpp"
#include "VROSC/zzzz__ScaleNode_def.hpp"
#include "VROSC/zzzz__ScaleRandomizer_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::ScaleRandomizer_RandomTarget._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleRandomizer_RandomTarget::*)()>(&::VROSC::ScaleRandomizer_RandomTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1720480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer_RandomTarget*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ScaleNode>& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr ::UnityW<::VROSC::ScaleNode> const& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_set_Scale(::UnityW<::VROSC::ScaleNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteNode>& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_Base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Base;
}
constexpr ::UnityW<::VROSC::NoteNode> const& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_Base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Base;
}
constexpr void VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_set_Base(::UnityW<::VROSC::NoteNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Base)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_ChanceToKeepBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChanceToKeepBase;
}
constexpr float_t const& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_ChanceToKeepBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChanceToKeepBase;
}
constexpr void VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_set_ChanceToKeepBase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChanceToKeepBase = value;
}
constexpr int32_t& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_MinDropNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinDropNotes;
}
constexpr int32_t const& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_MinDropNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinDropNotes;
}
constexpr void VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_set_MinDropNotes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinDropNotes = value;
}
constexpr int32_t& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_MaxDropNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDropNotes;
}
constexpr int32_t const& VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_get_MaxDropNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDropNotes;
}
constexpr void VROSC::ScaleRandomizer_RandomTarget::__cordl_internal_set_MaxDropNotes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDropNotes = value;
}
inline void VROSC::ScaleRandomizer_RandomTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer_RandomTarget*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScaleRandomizer_RandomTarget* VROSC::ScaleRandomizer_RandomTarget::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScaleRandomizer_RandomTarget*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScaleRandomizer_RandomTarget::ScaleRandomizer_RandomTarget()   {
}
//  Writing Method size for method: ::VROSC::ScaleRandomizer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleRandomizer::*)(::VROSC::Signal*)>(&::VROSC::ScaleRandomizer::NodeBegin)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1720280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleRandomizer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleRandomizer::*)()>(&::VROSC::ScaleRandomizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1720478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*>& VROSC::ScaleRandomizer::__cordl_internal_get__randomTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomTargets;
}
constexpr ::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*> const& VROSC::ScaleRandomizer::__cordl_internal_get__randomTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomTargets;
}
constexpr void VROSC::ScaleRandomizer::__cordl_internal_set__randomTargets(::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ScaleRandomizer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ScaleRandomizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleRandomizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScaleRandomizer* VROSC::ScaleRandomizer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScaleRandomizer*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScaleRandomizer::ScaleRandomizer()   {
}
