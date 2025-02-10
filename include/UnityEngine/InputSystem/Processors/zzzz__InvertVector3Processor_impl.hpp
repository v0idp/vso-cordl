#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/InvertVector3Processor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__InvertVector3Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor.Process
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)(::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::InvertVector3Processor::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e7bd10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)()>(&::UnityEngine::InputSystem::Processors::InvertVector3Processor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e7bd44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)()>(&::UnityEngine::InputSystem::Processors::InvertVector3Processor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e7be08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertX;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertX;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_set_invertX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertX = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertY;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertY;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_set_invertY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertY = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertZ;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertZ;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_set_invertZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertZ = value;
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::InvertVector3Processor::Process(::UnityEngine::Vector3  value, ::UnityEngine::InputSystem::InputControl*  control)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::InvertVector3Processor::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::InvertVector3Processor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::InvertVector3Processor* UnityEngine::InputSystem::Processors::InvertVector3Processor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::InvertVector3Processor::InvertVector3Processor()   {
}
