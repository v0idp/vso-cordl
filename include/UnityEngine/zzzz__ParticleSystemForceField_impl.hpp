#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemForceField.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemForceField_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleSystemForceField.get_endRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystemForceField::*)()>(&::UnityEngine::ParticleSystemForceField::get_endRange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fc0894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemForceField*>::get(),
                        "get_endRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemForceField.set_endRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystemForceField::*)(float_t)>(&::UnityEngine::ParticleSystemForceField::set_endRange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2fc08d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemForceField*>::get(),
                        "set_endRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ParticleSystemForceField::get_endRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemForceField*>::get(),
                        "get_endRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystemForceField::set_endRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemForceField*>::get(),
                        "set_endRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemForceField::ParticleSystemForceField()   {
}
