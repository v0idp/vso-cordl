#pragma once
// IWYU pragma private; include "VROSC/PlayBehaviourNode.hpp"
#include "VROSC/zzzz__IntNode_impl.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_impl.hpp"
#include "VROSC/zzzz__PlayBehaviourNode_def.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_def.hpp"
//  Writing Method size for method: ::VROSC::PlayBehaviourNode.get_PlayBehaviour
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoardPlayer_PlayBehaviour (::VROSC::PlayBehaviourNode::*)()>(&::VROSC::PlayBehaviourNode::get_PlayBehaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171af34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                        "get_PlayBehaviour",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayBehaviourNode.set_PlayBehaviour
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayBehaviourNode::*)(::VROSC::NoteBoardPlayer_PlayBehaviour)>(&::VROSC::PlayBehaviourNode::set_PlayBehaviour)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171af3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                        "set_PlayBehaviour",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardPlayer_PlayBehaviour>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayBehaviourNode.OnValidate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayBehaviourNode::*)()>(&::VROSC::PlayBehaviourNode::OnValidate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x171af48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayBehaviourNode.SetValueInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::PlayBehaviourNode::*)(int32_t)>(&::VROSC::PlayBehaviourNode::SetValueInRange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x171af6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayBehaviourNode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayBehaviourNode::*)()>(&::VROSC::PlayBehaviourNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x171af84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour& VROSC::PlayBehaviourNode::__cordl_internal_get__playBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBehaviour;
}
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour const& VROSC::PlayBehaviourNode::__cordl_internal_get__playBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBehaviour;
}
constexpr void VROSC::PlayBehaviourNode::__cordl_internal_set__playBehaviour(::VROSC::NoteBoardPlayer_PlayBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playBehaviour = value;
}
inline ::VROSC::NoteBoardPlayer_PlayBehaviour VROSC::PlayBehaviourNode::get_PlayBehaviour()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                        "get_PlayBehaviour",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteBoardPlayer_PlayBehaviour, false>(this, ___internal_method);
}
inline void VROSC::PlayBehaviourNode::set_PlayBehaviour(::VROSC::NoteBoardPlayer_PlayBehaviour  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                        "set_PlayBehaviour",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoardPlayer_PlayBehaviour>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::PlayBehaviourNode::OnValidate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VROSC::PlayBehaviourNode::SetValueInRange(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void VROSC::PlayBehaviourNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayBehaviourNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayBehaviourNode* VROSC::PlayBehaviourNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayBehaviourNode*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayBehaviourNode::PlayBehaviourNode()   {
}
