#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/ABSPathDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ABSPathDecoder_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ControlPoint_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__Path_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder.FinalizePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::*)(::DG::Tweening::Plugins::Core::PathCore::Path*, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, bool)>(&::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::FinalizePath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder.GetPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::*)(float_t, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>)>(&::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::*)()>(&::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e197c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, bool  isClosedPath)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p, wps, isClosedPath);
}
inline ::UnityEngine::Vector3 DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetPoint(float_t  perc, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, ::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  controlPoints)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, perc, wps, p, controlPoints);
}
inline void DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder* DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::ABSPathDecoder()   {
}
