#pragma once
// IWYU pragma private; include "VROSC/LoopStationInitializer.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__LoopStationInitializer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationInitializer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationInitializer::*)(::VROSC::Signal*)>(&::VROSC::LoopStationInitializer::NodeBegin)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18bbe94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationInitializer.MoveBackRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationInitializer::*)()>(&::VROSC::LoopStationInitializer::MoveBackRecursive)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x18bbf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                        "MoveBackRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationInitializer.GetLoopStationParentRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationInitializer::*)(::UnityEngine::Transform*)>(&::VROSC::LoopStationInitializer::GetLoopStationParentRecursive)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x18bc0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                        "GetLoopStationParentRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationInitializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationInitializer::*)()>(&::VROSC::LoopStationInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bc1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& VROSC::LoopStationInitializer::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& VROSC::LoopStationInitializer::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void VROSC::LoopStationInitializer::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationInitializer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::LoopStationInitializer::MoveBackRecursive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                        "MoveBackRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationInitializer::GetLoopStationParentRecursive(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                        "GetLoopStationParentRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline void VROSC::LoopStationInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationInitializer* VROSC::LoopStationInitializer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationInitializer*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationInitializer::LoopStationInitializer()   {
}
