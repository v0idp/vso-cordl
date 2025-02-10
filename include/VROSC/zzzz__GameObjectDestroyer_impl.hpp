#pragma once
// IWYU pragma private; include "VROSC/GameObjectDestroyer.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__GameObjectDestroyer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::GameObjectDestroyer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GameObjectDestroyer::*)(::VROSC::Signal*)>(&::VROSC::GameObjectDestroyer::NodeBegin)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x171cc94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectDestroyer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectDestroyer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GameObjectDestroyer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GameObjectDestroyer::*)()>(&::VROSC::GameObjectDestroyer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171cd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectDestroyer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::GameObjectDestroyer::__cordl_internal_get__targetGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::GameObjectDestroyer::__cordl_internal_get__targetGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGameObject;
}
constexpr void VROSC::GameObjectDestroyer::__cordl_internal_set__targetGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::GameObjectDestroyer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectDestroyer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::GameObjectDestroyer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectDestroyer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GameObjectDestroyer* VROSC::GameObjectDestroyer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GameObjectDestroyer*>());
}
// Ctor Parameters []
constexpr ::VROSC::GameObjectDestroyer::GameObjectDestroyer()   {
}
