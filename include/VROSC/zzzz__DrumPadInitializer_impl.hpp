#pragma once
// IWYU pragma private; include "VROSC/DrumPadInitializer.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__DrumPadInitializer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "VROSC/zzzz__NotePlayer_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
//  Writing Method size for method: ::VROSC::DrumPadInitializer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumPadInitializer::*)(::VROSC::Signal*)>(&::VROSC::DrumPadInitializer::NodeBegin)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1722ee4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumPadInitializer.GetNoteBoardRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumPadInitializer::*)(::UnityEngine::Transform*)>(&::VROSC::DrumPadInitializer::GetNoteBoardRecursive)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1723060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        "GetNoteBoardRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumPadInitializer.CloseButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumPadInitializer::*)()>(&::VROSC::DrumPadInitializer::CloseButtonPressed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1723114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumPadInitializer.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumPadInitializer::*)()>(&::VROSC::DrumPadInitializer::OnDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1723180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumPadInitializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumPadInitializer::*)()>(&::VROSC::DrumPadInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1723244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::IntNode>& VROSC::DrumPadInitializer::__cordl_internal_get__noteNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteNode;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::DrumPadInitializer::__cordl_internal_get__noteNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteNode;
}
constexpr void VROSC::DrumPadInitializer::__cordl_internal_set__noteNode(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NotePlayer>& VROSC::DrumPadInitializer::__cordl_internal_get__notePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notePlayer;
}
constexpr ::UnityW<::VROSC::NotePlayer> const& VROSC::DrumPadInitializer::__cordl_internal_get__notePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notePlayer;
}
constexpr void VROSC::DrumPadInitializer::__cordl_internal_set__notePlayer(::UnityW<::VROSC::NotePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notePlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::DrumPadInitializer::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::DrumPadInitializer::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void VROSC::DrumPadInitializer::__cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteBoard>& VROSC::DrumPadInitializer::__cordl_internal_get__noteBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr ::UnityW<::VROSC::NoteBoard> const& VROSC::DrumPadInitializer::__cordl_internal_get__noteBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr void VROSC::DrumPadInitializer::__cordl_internal_set__noteBoard(::UnityW<::VROSC::NoteBoard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteBoard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DrumPadInitializer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::DrumPadInitializer::GetNoteBoardRecursive(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        "GetNoteBoardRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void VROSC::DrumPadInitializer::CloseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DrumPadInitializer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DrumPadInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumPadInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DrumPadInitializer* VROSC::DrumPadInitializer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DrumPadInitializer*>());
}
// Ctor Parameters []
constexpr ::VROSC::DrumPadInitializer::DrumPadInitializer()   {
}
