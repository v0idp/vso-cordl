#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Core/zzzz__Utils_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Core::Utils.Vector3FromAngle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::DG::Tweening::Core::Utils::Vector3FromAngle)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x18ea180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "Vector3FromAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::Utils.Angle2D
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::DG::Tweening::Core::Utils::Angle2D)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x18ea1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "Angle2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::Utils.RotateAroundPivot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::DG::Tweening::Core::Utils::RotateAroundPivot)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18ea314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "RotateAroundPivot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::Utils.Vector3AreApproximatelyEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::DG::Tweening::Core::Utils::Vector3AreApproximatelyEqual)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18ea370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "Vector3AreApproximatelyEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::Utils.GetLooseScriptType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::DG::Tweening::Core::Utils::GetLooseScriptType)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x18ea470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "GetLooseScriptType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Core::Utils::setStaticF__loadedAssemblies(::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>, "_loadedAssemblies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get>(std::forward<::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>>(value));
}
inline ::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*> DG::Tweening::Core::Utils::getStaticF__loadedAssemblies()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>, "_loadedAssemblies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get>();
}
inline void DG::Tweening::Core::Utils::setStaticF__defAssembliesToQuery(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_defAssembliesToQuery", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> DG::Tweening::Core::Utils::getStaticF__defAssembliesToQuery()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_defAssembliesToQuery", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get>();
}
inline ::UnityEngine::Vector3 DG::Tweening::Core::Utils::Vector3FromAngle(float_t  degrees, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "Vector3FromAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, degrees, magnitude);
}
inline float_t DG::Tweening::Core::Utils::Angle2D(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "Angle2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Vector3 DG::Tweening::Core::Utils::RotateAroundPivot(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  pivot, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "RotateAroundPivot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, point, pivot, rotation);
}
inline bool DG::Tweening::Core::Utils::Vector3AreApproximatelyEqual(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "Vector3AreApproximatelyEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::System::Type* DG::Tweening::Core::Utils::GetLooseScriptType(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Utils*>::get(),
                        "GetLooseScriptType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, typeName);
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Utils::Utils()   {
}
