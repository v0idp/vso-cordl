#pragma once
// IWYU pragma private; include "VROSC/SimpleAppearObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__SimpleAppearObject_def.hpp"
//  Writing Method size for method: ::VROSC::SimpleAppearObject.get_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::SimpleAppearObject::*)()>(&::VROSC::SimpleAppearObject::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17aa1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SimpleAppearObject.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SimpleAppearObject::*)()>(&::VROSC::SimpleAppearObject::Setup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x17a9668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SimpleAppearObject.UpdateAppearance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SimpleAppearObject::*)(float_t)>(&::VROSC::SimpleAppearObject::UpdateAppearance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17a9b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "UpdateAppearance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SimpleAppearObject.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SimpleAppearObject::*)()>(&::VROSC::SimpleAppearObject::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17aa1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SimpleAppearObject._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SimpleAppearObject::*)()>(&::VROSC::SimpleAppearObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17aa21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::SimpleAppearObject::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr float_t const& VROSC::SimpleAppearObject::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void VROSC::SimpleAppearObject::__cordl_internal_set__size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr bool& VROSC::SimpleAppearObject::__cordl_internal_get__scaleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleEffect;
}
constexpr bool const& VROSC::SimpleAppearObject::__cordl_internal_get__scaleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleEffect;
}
constexpr void VROSC::SimpleAppearObject::__cordl_internal_set__scaleEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleEffect = value;
}
constexpr ::UnityEngine::Vector3& VROSC::SimpleAppearObject::__cordl_internal_get__originalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalScale;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SimpleAppearObject::__cordl_internal_get__originalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalScale;
}
constexpr void VROSC::SimpleAppearObject::__cordl_internal_set__originalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalScale = value;
}
constexpr bool& VROSC::SimpleAppearObject::__cordl_internal_get__setupDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr bool const& VROSC::SimpleAppearObject::__cordl_internal_get__setupDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr void VROSC::SimpleAppearObject::__cordl_internal_set__setupDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupDone = value;
}
inline float_t VROSC::SimpleAppearObject::get_Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::SimpleAppearObject::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SimpleAppearObject::UpdateAppearance(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "UpdateAppearance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void VROSC::SimpleAppearObject::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SimpleAppearObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleAppearObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SimpleAppearObject* VROSC::SimpleAppearObject::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SimpleAppearObject*>());
}
// Ctor Parameters []
constexpr ::VROSC::SimpleAppearObject::SimpleAppearObject()   {
}
