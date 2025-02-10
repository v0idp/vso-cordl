#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirrorTransform.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorTransform::*)()>(&::GlobalNamespace::MirrorTransform::Update)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x16c5250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorTransform*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorTransform.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorTransform::*)()>(&::GlobalNamespace::MirrorTransform::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16c53f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorTransform*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorTransform._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorTransform::*)()>(&::GlobalNamespace::MirrorTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c54e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorTransform*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirrorTransform::__cordl_internal_get__mirror()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirror;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirrorTransform::__cordl_internal_get__mirror() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirror;
}
constexpr void GlobalNamespace::MirrorTransform::__cordl_internal_set__mirror(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirror)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MirrorTransform::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorTransform*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorTransform::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorTransform*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorTransform*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorTransform* GlobalNamespace::MirrorTransform::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirrorTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorTransform::MirrorTransform()   {
}
