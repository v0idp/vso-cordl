#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/ControlPoint.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ControlPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::ControlPoint._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::ControlPoint::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::DG::Tweening::Plugins::Core::PathCore::ControlPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18e12bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::ControlPoint.op_Addition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Plugins::Core::PathCore::ControlPoint (*)(::DG::Tweening::Plugins::Core::PathCore::ControlPoint, ::UnityEngine::Vector3)>(&::DG::Tweening::Plugins::Core::PathCore::ControlPoint::op_Addition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18e1a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                        "op_Addition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::ControlPoint.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::DG::Tweening::Plugins::Core::PathCore::ControlPoint::*)()>(&::DG::Tweening::Plugins::Core::PathCore::ControlPoint::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e1a50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Core::PathCore::ControlPoint::_ctor(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, b);
}
inline ::DG::Tweening::Plugins::Core::PathCore::ControlPoint DG::Tweening::Plugins::Core::PathCore::ControlPoint::op_Addition(::DG::Tweening::Plugins::Core::PathCore::ControlPoint  cp, ::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                        "op_Addition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Plugins::Core::PathCore::ControlPoint, false>(nullptr, ___internal_method, cp, v);
}
inline ::StringW DG::Tweening::Plugins::Core::PathCore::ControlPoint::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "a", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Core::PathCore::ControlPoint::ControlPoint(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) noexcept  {
this->a = a;
this->b = b;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Core::PathCore::ControlPoint::ControlPoint()   {
}
