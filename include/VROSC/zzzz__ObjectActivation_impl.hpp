#pragma once
// IWYU pragma private; include "VROSC/ObjectActivation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ObjectActivation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::VROSC::ObjectActivation.get_GameObjects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::VROSC::ObjectActivation::*)()>(&::VROSC::ObjectActivation::get_GameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1770e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivation*>::get(),
                        "get_GameObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ObjectActivation.ActivateByPercentage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ObjectActivation::*)(float_t)>(&::VROSC::ObjectActivation::ActivateByPercentage)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x176ca34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivation*>::get(),
                        "ActivateByPercentage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ObjectActivation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ObjectActivation::*)()>(&::VROSC::ObjectActivation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1770e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& VROSC::ObjectActivation::__cordl_internal_get__gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& VROSC::ObjectActivation::__cordl_internal_get__gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjects;
}
constexpr void VROSC::ObjectActivation::__cordl_internal_set__gameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* VROSC::ObjectActivation::get_GameObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivation*>::get(),
                        "get_GameObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, false>(this, ___internal_method);
}
inline void VROSC::ObjectActivation::ActivateByPercentage(float_t  percentage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivation*>::get(),
                        "ActivateByPercentage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, percentage);
}
inline void VROSC::ObjectActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ObjectActivation* VROSC::ObjectActivation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ObjectActivation*>());
}
// Ctor Parameters []
constexpr ::VROSC::ObjectActivation::ObjectActivation()   {
}
