#pragma once
// IWYU pragma private; include "VROSC/PlayBehaviourField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_impl.hpp"
#include "VROSC/zzzz__PlayBehaviourField_def.hpp"
#include "VROSC/zzzz__PlayBehaviourNode_def.hpp"
//  Writing Method size for method: ::VROSC::PlayBehaviourField.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::PlayBehaviourField::*)()>(&::VROSC::PlayBehaviourField::get_Value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x171aea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayBehaviourField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayBehaviourField::*)()>(&::VROSC::PlayBehaviourField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171af2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour& VROSC::PlayBehaviourField::__cordl_internal_get_EnteredValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour const& VROSC::PlayBehaviourField::__cordl_internal_get_EnteredValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr void VROSC::PlayBehaviourField::__cordl_internal_set_EnteredValue(::VROSC::NoteBoardPlayer_PlayBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnteredValue = value;
}
constexpr ::UnityW<::VROSC::PlayBehaviourNode>& VROSC::PlayBehaviourField::__cordl_internal_get_ConnectedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr ::UnityW<::VROSC::PlayBehaviourNode> const& VROSC::PlayBehaviourField::__cordl_internal_get_ConnectedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr void VROSC::PlayBehaviourField::__cordl_internal_set_ConnectedValue(::UnityW<::VROSC::PlayBehaviourNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::PlayBehaviourField::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::PlayBehaviourField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayBehaviourField* VROSC::PlayBehaviourField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayBehaviourField*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayBehaviourField::PlayBehaviourField()   {
}
