#pragma once
// IWYU pragma private; include "VROSC/NoteBoardStringAnimator.hpp"
#include "VROSC/zzzz__Axis_impl.hpp"
#include "VROSC/zzzz__NoteBoardNoteAnimator_impl.hpp"
#include "VROSC/zzzz__NoteBoardStringAnimator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Axis_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
//  Writing Method size for method: ::VROSC::NoteBoardStringAnimator.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardStringAnimator::*)(::VROSC::NoteBoardNote*, ::ArrayW<int32_t,::Array<int32_t>*>, ::UnityEngine::Vector3)>(&::VROSC::NoteBoardStringAnimator::Setup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17b2010;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardStringAnimator.GetAxis
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Axis (::VROSC::NoteBoardStringAnimator::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoardStringAnimator::GetAxis)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17b2184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        "GetAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardStringAnimator.SetRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardStringAnimator::*)()>(&::VROSC::NoteBoardStringAnimator::SetRotation)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x17b21f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        "SetRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardStringAnimator.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::NoteBoardStringAnimator::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoardStringAnimator::GetScale)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17b21bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardStringAnimator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardStringAnimator::*)()>(&::VROSC::NoteBoardStringAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17b22fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Axis& VROSC::NoteBoardStringAnimator::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::VROSC::Axis const& VROSC::NoteBoardStringAnimator::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void VROSC::NoteBoardStringAnimator::__cordl_internal_set__axis(::VROSC::Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr float_t& VROSC::NoteBoardStringAnimator::__cordl_internal_get__width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr float_t const& VROSC::NoteBoardStringAnimator::__cordl_internal_get__width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr void VROSC::NoteBoardStringAnimator::__cordl_internal_set__width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width = value;
}
inline void VROSC::NoteBoardStringAnimator::Setup(::VROSC::NoteBoardNote*  noteBoardNote, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields, ::UnityEngine::Vector3  scale)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteBoardNote, numberOfFields, scale);
}
inline ::VROSC::Axis VROSC::NoteBoardStringAnimator::GetAxis(::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        "GetAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Axis, false>(this, ___internal_method, scale);
}
inline void VROSC::NoteBoardStringAnimator::SetRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        "SetRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::NoteBoardStringAnimator::GetScale(::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, scale);
}
inline void VROSC::NoteBoardStringAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardStringAnimator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoardStringAnimator* VROSC::NoteBoardStringAnimator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardStringAnimator*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardStringAnimator::NoteBoardStringAnimator()   {
}
