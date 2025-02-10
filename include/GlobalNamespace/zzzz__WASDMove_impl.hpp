#pragma once
// IWYU pragma private; include "GlobalNamespace/WASDMove.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WASDMove_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WASDMove.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WASDMove::*)()>(&::GlobalNamespace::WASDMove::Update)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x16c2230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WASDMove*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WASDMove._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WASDMove::*)()>(&::GlobalNamespace::WASDMove::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16c2474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WASDMove*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::WASDMove::__cordl_internal_get__movementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementSpeed;
}
constexpr float_t const& GlobalNamespace::WASDMove::__cordl_internal_get__movementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementSpeed;
}
constexpr void GlobalNamespace::WASDMove::__cordl_internal_set__movementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementSpeed = value;
}
inline void GlobalNamespace::WASDMove::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WASDMove*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WASDMove::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WASDMove*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::WASDMove* GlobalNamespace::WASDMove::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::WASDMove*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WASDMove::WASDMove()   {
}
